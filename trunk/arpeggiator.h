#ifndef DREAMSCULPT_ARPEGGIATOR_H
#define DREAMSCULPT_ARPEGGIATOR_H 1
#include <sys/time.h>
#include <QList>

inline double tme() {
	struct timespec now;
	clock_gettime(CLOCK_MONOTONIC, &now);
	return now.tv_sec + (now.tv_nsec / 1000000000.0);
}

struct ArpNote {
	double length;
	int note;
	bool pause;
};

class Arpeggiator {
	private:
	int note;
	int velocity;
	int channel;
	int cnote;
	int lastnote;

	int qnote;
	int qvelocity;
	int qchannel;
	int qtempo;
	QList <ArpNote> qpattern;
	bool queued;
	bool zombie;

	double nextnote;

	double timer;

	int tempo;
	QList <ArpNote> pattern;
	double calcNextNote(double);
	void queNext();

	public:
	Arpeggiator(int note, int velocity, int channel, int tempo, QList<ArpNote> arp);
	void queArp(int note, int velocity, int channel, int tempo, QList<ArpNote> arp);
	bool isQueued() { return queued; }
	bool getQueuedNote() { return qnote; }
	void rmQueue() { queued = false; }
	double update();
	int getNote() { return note; }
	bool isZombie() { return zombie; }
	void setZombie(bool z) { zombie = z; }
	~Arpeggiator();

};


#endif
