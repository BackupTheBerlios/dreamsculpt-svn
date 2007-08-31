#include <stdio.h>
#include <unistd.h>
#include "alsamidi.h"
#include "mainwindow.h"
#include <QThread>
#include <QDir>

AlsaMidi *mid = new AlsaMidi();

class MIDIProcessor : public QThread {
	public: 
	void run() {
		mid->filterData();
	}
};

class ARPProcessor : public QThread {
	public: 
	void run() {
		while(true) {
			double nextnote = mid->updateArpeggiators();
			if(nextnote == 0){
				usleep(1000);
			} else {
				usleep((unsigned long)((nextnote - tme()) * 1000000));
			}
		}
	}
};


int main(int argc, char **argv){

	QApplication app(argc, argv);

	MainWindow mw(0);

	QDir hme = QDir::home();
	hme.mkdir(".dreamsculpt");

	mw.show();
	MIDIProcessor mp;
	ARPProcessor ap;
	
	mp.start();
	ap.start();
	

    int rs = app.exec();
	return rs;
}
