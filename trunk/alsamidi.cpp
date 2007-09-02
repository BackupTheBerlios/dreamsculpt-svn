#include <alsa/asoundlib.h>
#include "alsamidi.h"
#include <iostream>

snd_seq_t *AlsaMidi::openClient()
{
        snd_seq_t *handle;
        int err;
        err = snd_seq_open(&handle, "default", SND_SEQ_OPEN_DUPLEX, 0);
        if (err < 0)
                return NULL;
        snd_seq_set_client_name(handle, "DreamSculpt");
        return handle;
}


int AlsaMidi::getWritePort()
{
        return snd_seq_create_simple_port(seq, "input",
                        SND_SEQ_PORT_CAP_WRITE|SND_SEQ_PORT_CAP_SUBS_WRITE,
                        SND_SEQ_PORT_TYPE_MIDI_GENERIC);
}

int AlsaMidi::getReadPort()
{
        return snd_seq_create_simple_port(seq, "output",
                        SND_SEQ_PORT_CAP_READ|SND_SEQ_PORT_CAP_SUBS_READ,
                        SND_SEQ_PORT_TYPE_MIDI_GENERIC);
}

double AlsaMidi::updateArpeggiators() {
	double nearest = 0;
	for(int i = 0; i < arpeggiators.size(); i++){
		double next = arpeggiators[i]->update();
		if(nearest == 0 || next < nearest)
			nearest = next;
	}
	return nearest;
}

void AlsaMidi::filterData() { 
	snd_seq_event_t *ev;
	while (snd_seq_event_input(seq, &ev) >= 0) {

		if(bypass)
			goto bypass;

		if(pattern.size() == 0)
			goto bypass;

		if(ev->type == SND_SEQ_EVENT_NOTE){
			printf("Note?\n");
		}

		if(ev->type == SND_SEQ_EVENT_NOTEON){
			snd_seq_ev_note nte;
			nte = ev->data.note;
			if(syncmono && arpeggiators.size())
				arpeggiators[0]->queArp(nte.note, nte.velocity, nte.channel, tempo, pattern);
			else
				arpeggiators.push_back(new Arpeggiator(nte.note, nte.velocity, nte.channel, tempo, pattern));
			continue;
		}

		if(ev->type == SND_SEQ_EVENT_NOTEOFF){
			for(int i = 0; i < arpeggiators.size(); i++){
				if(arpeggiators[i]->getNote() == ev->data.note.note) {
					if(arpeggiators[i]->isQueued()) {
						arpeggiators[i]->setZombie(true);
						continue;
					}
					Arpeggiator *tmp = arpeggiators[i];
					arpeggiators.removeAt(i);
					delete tmp;
				} else if (
							arpeggiators[i]->isQueued() &&
							(arpeggiators[i]->getQueuedNote() == ev->data.note.note)
						  ) {
					arpeggiators[i]->rmQueue();	
					if(arpeggiators[i]->isZombie()) {
						Arpeggiator *tmp = arpeggiators[i];
						arpeggiators.removeAt(i);
						delete tmp;
						continue;
					}
				}
			}
			continue;
		}
		
		bypass:
		// Fallthrough: Bypass event.
        snd_seq_ev_set_source(ev, oport);
        snd_seq_ev_set_direct(ev);
        snd_seq_ev_set_subs(ev);
        snd_seq_event_output(seq, ev);
        snd_seq_drain_output(seq);
	}
}

void AlsaMidi::noteOn(int channel, int note, int velocity){
	snd_seq_event_t ev;
	snd_seq_ev_clear(&ev);
    snd_seq_ev_set_source(&ev, oport);
    snd_seq_ev_set_direct(&ev);
    snd_seq_ev_set_subs(&ev);
	snd_seq_ev_set_noteon(&ev, channel, note, velocity);
    snd_seq_event_output(seq, &ev);
    snd_seq_drain_output(seq);
}

void AlsaMidi::noteOff(int channel, int note){
	snd_seq_event_t ev;
	snd_seq_ev_clear(&ev);
    snd_seq_ev_set_source(&ev, oport);
    snd_seq_ev_set_direct(&ev);
    snd_seq_ev_set_subs(&ev);
	snd_seq_ev_set_noteoff(&ev, channel, note, 127);
    snd_seq_event_output(seq, &ev);
    snd_seq_drain_output(seq);
}

void AlsaMidi::setTempo(int tempo){
	this->tempo = tempo;
}

void AlsaMidi::setPattern(QList<ArpNote> pat){
	this->pattern = pat;
}

void AlsaMidi::setBypass(bool state){
	bypass = state;
}

void AlsaMidi::setSyncMono(bool state){
	syncmono = state;
}



// Constructor
AlsaMidi::AlsaMidi(){
	printf("Constructing...\n");
	seq = openClient();
	iport = getWritePort();
	oport = getReadPort();
	bypass = false;
	syncmono = false;
	newnote = -1;
}
