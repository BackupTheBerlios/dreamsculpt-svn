#ifndef DREAMSCULPT_ALSAMIDI_H
#define DREAMSCULPT_ALSAMIDI_H 1
#include <alsa/asoundlib.h>
#include <QList>
#include <QMutex>
#include <QMutexLocker>
#include "arpeggiator.h"
#include "port.h"

class AlsaMidi {
	private:
	snd_seq_t *seq;

	QMutex imutex;
	
	int iport, oport;
	int tempo;
	bool bypass;

	QList<ArpNote> pattern;
	QList<Arpeggiator *> arpeggiators;

	snd_seq_t *openClient();
	int getWritePort();
	int getReadPort();
	public:
	void noteOn(int channel, int note, int velocity);
	void noteOff(int channel, int note);
	void setTempo(int tempo);
	void setPattern(QList<ArpNote> pat);
	double updateArpeggiators();
	void setBypass(bool state);
	void filterData();
	AlsaMidi();
};

extern AlsaMidi *mid;

#endif
