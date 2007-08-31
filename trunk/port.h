#ifndef DREAMSCULPT_PORT_H
#define DREAMSCULPT_PORT_H 1
#include <QList>
#include <QString>

struct Port {
	QString name;
	int cid;
	int pid;
	bool input;
};

#endif
