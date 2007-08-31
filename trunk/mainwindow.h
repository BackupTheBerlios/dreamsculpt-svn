#ifndef DREAMSCULPT_MAINWINDOW_H
#define DREAMSCULPT_MAINWINDOW_H 1
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QList>
#include <QFileDialog>
#include "port.h"
#include "arpeggiator.h"
#include <math.h>
#include "alsamidi.h"


class MainWindow : public QMainWindow, private Ui::MainWindow {
	Q_OBJECT
	
	private:
	QList <ArpNote> arp;
	QStringList recentFiles;
	int tempo;
	QString fn;

	void redrawBox();
	void redrawRecent();

	void saveArpeggio(QString fname);
	void loadArpeggio(QString fname);

	void loadRecent();
	void storeRecent();
	void addRecent(QString);

	public:
	MainWindow(QWidget *parent = 0);

	private slots:
	void on_actionAbout_activated() {
		QMessageBox::about(this, "DreamSculpt", "DreamSculpt 1.0\nsuva@linux.ee");
	}

	void on_actionOpen_activated() {
		QString filename = QFileDialog::getOpenFileName(
			this, "Open arpeggio",
			"",
			"DreamSculpt Arpeggio (*.dsa)"
		);
		if(filename.isEmpty())
			return;
		loadArpeggio(filename);
		fn = filename;
		addRecent(fn);
	}
	
	void on_recentCombo_clicked() {
		if(recentCombo->currentRow() < 0)
			return;
		loadArpeggio(recentFiles[recentCombo->currentRow()]);
	}

	void on_actionSave_activated() {
		QString filename;
		if(fn.isEmpty()) {
				filename = QFileDialog::getSaveFileName(
				this, "Save arpeggio",
				"",
				"DreamSculpt Arpeggio (*.dsa)"
			);
		} else {
			filename = fn;
		}
		if(filename.isEmpty())
			return;
		saveArpeggio(filename);
		fn = filename;
		addRecent(fn);
	}

	void on_actionSave_As_activated() {
		QString filename = QFileDialog::getSaveFileName(
			this, "Save arpeggio",
			"",
			"DreamSculpt Arpeggio (*.dsa)"
		);
		if(filename.isEmpty())
			return;
		saveArpeggio(filename);
		fn = filename;
		addRecent(fn);
	}

	void on_tempoBox_valueChanged(int val) {
		tempo = val;
		mid->setTempo(val);
	}

	void on_addElement_clicked() {
		ArpNote note;
		note.length = 2.0 / pow(2, lengthCombo->currentIndex());
		note.note = noteCombo->value();
		arp.push_back(note);
		redrawBox();
	}

	void on_deleteButton_clicked() {
		int i = arpBox->currentRow();
		arp.removeAt(i);
		redrawBox();
		if(i >= arp.size())
			i = arp.size() - 1;
		arpBox->setCurrentRow(i);
	}

	void on_upButton_clicked() {
		if(!arp.size())
			return;
		int i = arpBox->currentRow();
		if(i == 0)
			return;
		ArpNote tmp = arp[i];
		arp.removeAt(i);
		arp.insert(i - 1, tmp);
		redrawBox();
		arpBox->setCurrentRow(i - 1);
	}

	void on_downButton_clicked() {
		if(!arp.size())
			return;
		int i = arpBox->currentRow();
		if(i == arp.size() - 1)
			return;
		ArpNote tmp = arp[i];
		arp.removeAt(i);
		arp.insert(i + 1, tmp);
		redrawBox();
		arpBox->setCurrentRow(i + 1);
	}

	void on_bypassButton_clicked(bool state) {
		mid->setBypass(state);
	}
};


#endif
