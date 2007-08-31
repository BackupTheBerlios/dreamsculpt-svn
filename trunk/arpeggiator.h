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
};

class Arpeggiator {
	private:
	int note;
	int velocity;
	int channel;
	int cnote;

	double nextnote;

	double timer;

	int tempo;
	QList <ArpNote> pattern;
	double calcNextNote(double);

	public:
	Arpeggiator(int note, int velocity, int channel, int tempo, QList<ArpNote> arp);
	double update();
	int getNote() { return note; }
	~Arpeggiator();

};


#endif