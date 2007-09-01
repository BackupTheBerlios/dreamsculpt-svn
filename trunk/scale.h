#ifndef DREAMSCULPT_SCALE_H
#define DREAMSCULPT_SCALE_H 1

#include <QList>
#include <QString>

class Scale {
	bool pattern[12];
	QString name;
	
	public:
	Scale(char *p, QString n);
	bool hasNote(int i);
	QString getName();
};

class ScaleFinder {
	QList<Scale *> scales;
	bool active;
	Scale *scale;
	int root;
	int method;

	public:
	enum ScaleFindMethod {
		METHOD_UP,
		METHOD_DOWN,
		METHOD_RANDOM,
		METHOD_UP_NEAREST,
		METHOD_DOWN_NEAREST,
	};

	ScaleFinder();

	Scale *getScale(int id);

	int findNote(int note);

	void setActive(bool a){ active = a; }
	void setRoot(int r)   { root   = r; }
	void setScale(int s)  { scale = scales[s]; }
	void setMethod(int e) { method = e; }
};

extern ScaleFinder *sf;

#endif
