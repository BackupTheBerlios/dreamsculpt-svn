#include "mainwindow.h"
#include <QDataStream>
#include <QFile>

MainWindow::MainWindow(QWidget *parent){
	setupUi(this);
	tempo = 120;
	mid->setTempo(tempo);
	loadRecent();
	if(parent)
		return;
}

void MainWindow::redrawBox() {
	arpBox->clear();
	for(int i = 0; i < arp.size(); i++){
		QString label;
		label += QString::number(arp[i].length, 'g', 2);
		label += "  --  ";
		label += QString::number(arp[i].note);
		arpBox->addItem(label);
	}
	mid->setPattern(arp);
}

void MainWindow::redrawRecent() {
	recentCombo->clear();
	for(int i = 0; i < recentFiles.size(); i++){
		recentCombo->addItem(recentFiles[i]);
	}
}

void MainWindow::saveArpeggio(QString fname){
	QFile file(fname);
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);

	out << QString("DREAMSCULPT");

	for(int i = 0; i < arp.size(); i++){
		out << arp[i].length;
		out << arp[i].note;
	}
}

void MainWindow::loadArpeggio(QString fname){
	QFile file(fname);
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);
	
	QString str;

	in >> str;

	if(!(str == "DREAMSCULPT"))
		return;

	arp.clear();
	while(!in.atEnd()){
		ArpNote note;
		in >> note.length;
		in >> note.note;
		arp.push_back(note);
	}
	redrawBox();
}

void MainWindow::storeRecent() {
	QString path = QDir::homePath() + "/.dreamsculpt/recentfiles";
	QFile file(path);
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);

	for(int i = 0; i < recentFiles.size(); i++){
		out << recentFiles[i];
	}
}

void MainWindow::loadRecent() {
	QString path = QDir::homePath() + "/.dreamsculpt/recentfiles";
	QFile file(path);
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);

	while(!in.atEnd()){
		QString str;
		in >> str;
		recentFiles.push_back(str);
		printf("STring!\n");
	}
	redrawRecent();
}

void MainWindow::addRecent(QString fname){
	if(recentFiles.contains(fname))
		return;
	recentFiles.push_back(fname);
	recentFiles.sort();
	storeRecent();
	redrawRecent();
}
