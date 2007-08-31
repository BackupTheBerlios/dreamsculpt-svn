#include <arpeggiator.h>
#include "alsamidi.h"

Arpeggiator::Arpeggiator(int note, int velocity, int channel, int tempo, QList<ArpNote> arp) {
	this->note = note;
	this->velocity = velocity;
	this->channel = channel;
	this->tempo = tempo;
	this->pattern = arp;

	cnote = 0;

	// Trigger first note
	mid->noteOn(channel, note + pattern[cnote].note, velocity);
	
	// Calculate time until next next note change
	nextnote = calcNextNote(tme());
}

double Arpeggiator::calcNextNote(double time) {
	double nlen = 60.0 / tempo * pattern[cnote].length;
	return time + nlen;
}

double Arpeggiator::update() {
	if(tme() < nextnote)
		return nextnote;

	mid->noteOff(channel, note + pattern[cnote].note);

	if(cnote + 1 >= pattern.size())
		cnote = 0;
	else
		cnote++;

	mid->noteOn(channel, note + pattern[cnote].note, velocity);
	nextnote = calcNextNote(nextnote);
	return nextnote;
}

Arpeggiator::~Arpeggiator() {
	// Aaah... Dying... I will take everyone with me!
	mid->noteOff(channel, pattern[cnote].note + note);
}
