/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sun Sep 2 13:41:44 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QFrame *upperFrame;
    QHBoxLayout *hboxLayout1;
    QPushButton *bypassButton;
    QPushButton *syncMonoButton;
    QSpinBox *tempoBox;
    QFrame *frame_6;
    QHBoxLayout *hboxLayout2;
    QComboBox *scaleRoot;
    QComboBox *scaleType;
    QComboBox *scaleMode;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout1;
    QListWidget *arpBox;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout3;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *deleteButton;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout4;
    QPushButton *pauseButton;
    QSpinBox *noteCombo;
    QComboBox *lengthCombo;
    QPushButton *addElement;
    QFrame *frame_5;
    QVBoxLayout *vboxLayout2;
    QLabel *label;
    QListWidget *recentCombo;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp_2;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    QSize size(570, 498);
    size = size.expandedTo(MainWindow->minimumSizeHint());
    MainWindow->resize(size);
    MainWindow->setWindowIcon(QIcon(QString::fromUtf8(":/new/prefix1/icon.png")));
    actionQuit = new QAction(MainWindow);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
    actionQuit->setIcon(QIcon(QString::fromUtf8("../../../../usr/share/icons/default.kde/16x16/actions/exit.png")));
    actionAbout = new QAction(MainWindow);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    actionOpen = new QAction(MainWindow);
    actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
    actionSave = new QAction(MainWindow);
    actionSave->setObjectName(QString::fromUtf8("actionSave"));
    actionSave->setShortcutContext(Qt::ApplicationShortcut);
    actionSave_As = new QAction(MainWindow);
    actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    hboxLayout = new QHBoxLayout(centralwidget);
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(9, 9, 9, 9);
    frame = new QFrame(centralwidget);
    frame->setObjectName(QString::fromUtf8("frame"));
    QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
    frame->setSizePolicy(sizePolicy);
    frame->setFrameShape(QFrame::NoFrame);
    frame->setFrameShadow(QFrame::Raised);
    vboxLayout = new QVBoxLayout(frame);
    vboxLayout->setSpacing(6);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    upperFrame = new QFrame(frame);
    upperFrame->setObjectName(QString::fromUtf8("upperFrame"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(upperFrame->sizePolicy().hasHeightForWidth());
    upperFrame->setSizePolicy(sizePolicy1);
    upperFrame->setFrameShape(QFrame::StyledPanel);
    upperFrame->setFrameShadow(QFrame::Raised);
    hboxLayout1 = new QHBoxLayout(upperFrame);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    hboxLayout1->setContentsMargins(9, 9, 9, 9);
    bypassButton = new QPushButton(upperFrame);
    bypassButton->setObjectName(QString::fromUtf8("bypassButton"));
    sizePolicy1.setHeightForWidth(bypassButton->sizePolicy().hasHeightForWidth());
    bypassButton->setSizePolicy(sizePolicy1);
    bypassButton->setCheckable(true);
    bypassButton->setDefault(false);
    bypassButton->setFlat(false);

    hboxLayout1->addWidget(bypassButton);

    syncMonoButton = new QPushButton(upperFrame);
    syncMonoButton->setObjectName(QString::fromUtf8("syncMonoButton"));
    QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(syncMonoButton->sizePolicy().hasHeightForWidth());
    syncMonoButton->setSizePolicy(sizePolicy2);
    syncMonoButton->setCheckable(true);

    hboxLayout1->addWidget(syncMonoButton);

    tempoBox = new QSpinBox(upperFrame);
    tempoBox->setObjectName(QString::fromUtf8("tempoBox"));
    sizePolicy2.setHeightForWidth(tempoBox->sizePolicy().hasHeightForWidth());
    tempoBox->setSizePolicy(sizePolicy2);
    tempoBox->setMinimumSize(QSize(50, 0));
    tempoBox->setMinimum(20);
    tempoBox->setMaximum(300);
    tempoBox->setValue(120);

    hboxLayout1->addWidget(tempoBox);


    vboxLayout->addWidget(upperFrame);

    frame_6 = new QFrame(frame);
    frame_6->setObjectName(QString::fromUtf8("frame_6"));
    frame_6->setFrameShape(QFrame::StyledPanel);
    frame_6->setFrameShadow(QFrame::Raised);
    hboxLayout2 = new QHBoxLayout(frame_6);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    scaleRoot = new QComboBox(frame_6);
    scaleRoot->setObjectName(QString::fromUtf8("scaleRoot"));
    sizePolicy2.setHeightForWidth(scaleRoot->sizePolicy().hasHeightForWidth());
    scaleRoot->setSizePolicy(sizePolicy2);

    hboxLayout2->addWidget(scaleRoot);

    scaleType = new QComboBox(frame_6);
    scaleType->setObjectName(QString::fromUtf8("scaleType"));
    scaleType->setEnabled(false);
    QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(scaleType->sizePolicy().hasHeightForWidth());
    scaleType->setSizePolicy(sizePolicy3);

    hboxLayout2->addWidget(scaleType);

    scaleMode = new QComboBox(frame_6);
    scaleMode->setObjectName(QString::fromUtf8("scaleMode"));
    scaleMode->setEnabled(false);

    hboxLayout2->addWidget(scaleMode);


    vboxLayout->addWidget(frame_6);

    frame_2 = new QFrame(frame);
    frame_2->setObjectName(QString::fromUtf8("frame_2"));
    frame_2->setFrameShape(QFrame::Panel);
    frame_2->setFrameShadow(QFrame::Raised);
    vboxLayout1 = new QVBoxLayout(frame_2);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout1->setContentsMargins(9, 9, 9, 9);
    arpBox = new QListWidget(frame_2);
    arpBox->setObjectName(QString::fromUtf8("arpBox"));
    arpBox->setLayoutDirection(Qt::LeftToRight);

    vboxLayout1->addWidget(arpBox);

    frame_3 = new QFrame(frame_2);
    frame_3->setObjectName(QString::fromUtf8("frame_3"));
    frame_3->setFrameShape(QFrame::StyledPanel);
    frame_3->setFrameShadow(QFrame::Raised);
    hboxLayout3 = new QHBoxLayout(frame_3);
    hboxLayout3->setSpacing(6);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    hboxLayout3->setContentsMargins(9, 9, 9, 9);
    upButton = new QPushButton(frame_3);
    upButton->setObjectName(QString::fromUtf8("upButton"));
    upButton->setIcon(QIcon(QString::fromUtf8("../../../../usr/share/icons/default.kde/16x16/actions/1uparrow.png")));

    hboxLayout3->addWidget(upButton);

    downButton = new QPushButton(frame_3);
    downButton->setObjectName(QString::fromUtf8("downButton"));
    downButton->setIcon(QIcon(QString::fromUtf8("../../../../usr/share/icons/default.kde/16x16/actions/1downarrow.png")));

    hboxLayout3->addWidget(downButton);

    deleteButton = new QPushButton(frame_3);
    deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
    deleteButton->setIcon(QIcon(QString::fromUtf8("../../../../usr/share/icons/default.kde/16x16/actions/remove.png")));

    hboxLayout3->addWidget(deleteButton);


    vboxLayout1->addWidget(frame_3);

    frame_4 = new QFrame(frame_2);
    frame_4->setObjectName(QString::fromUtf8("frame_4"));
    frame_4->setFrameShape(QFrame::StyledPanel);
    frame_4->setFrameShadow(QFrame::Raised);
    hboxLayout4 = new QHBoxLayout(frame_4);
    hboxLayout4->setSpacing(6);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    hboxLayout4->setContentsMargins(9, 9, 9, 9);
    pauseButton = new QPushButton(frame_4);
    pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
    pauseButton->setCheckable(true);

    hboxLayout4->addWidget(pauseButton);

    noteCombo = new QSpinBox(frame_4);
    noteCombo->setObjectName(QString::fromUtf8("noteCombo"));
    noteCombo->setMinimum(-24);
    noteCombo->setMaximum(24);

    hboxLayout4->addWidget(noteCombo);

    lengthCombo = new QComboBox(frame_4);
    lengthCombo->setObjectName(QString::fromUtf8("lengthCombo"));

    hboxLayout4->addWidget(lengthCombo);

    addElement = new QPushButton(frame_4);
    addElement->setObjectName(QString::fromUtf8("addElement"));
    addElement->setIcon(QIcon(QString::fromUtf8("../../../../usr/share/icons/default.kde/16x16/actions/add.png")));

    hboxLayout4->addWidget(addElement);


    vboxLayout1->addWidget(frame_4);


    vboxLayout->addWidget(frame_2);


    hboxLayout->addWidget(frame);

    frame_5 = new QFrame(centralwidget);
    frame_5->setObjectName(QString::fromUtf8("frame_5"));
    frame_5->setFrameShape(QFrame::StyledPanel);
    frame_5->setFrameShadow(QFrame::Raised);
    vboxLayout2 = new QVBoxLayout(frame_5);
    vboxLayout2->setSpacing(6);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    vboxLayout2->setContentsMargins(9, 9, 9, 9);
    label = new QLabel(frame_5);
    label->setObjectName(QString::fromUtf8("label"));

    vboxLayout2->addWidget(label);

    recentCombo = new QListWidget(frame_5);
    recentCombo->setObjectName(QString::fromUtf8("recentCombo"));

    vboxLayout2->addWidget(recentCombo);


    hboxLayout->addWidget(frame_5);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 570, 29));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    menuHelp_2 = new QMenu(menubar);
    menuHelp_2->setObjectName(QString::fromUtf8("menuHelp_2"));
    MainWindow->setMenuBar(menubar);
    QWidget::setTabOrder(pauseButton, tempoBox);
    QWidget::setTabOrder(tempoBox, arpBox);
    QWidget::setTabOrder(arpBox, upButton);
    QWidget::setTabOrder(upButton, downButton);
    QWidget::setTabOrder(downButton, deleteButton);
    QWidget::setTabOrder(deleteButton, noteCombo);
    QWidget::setTabOrder(noteCombo, lengthCombo);
    QWidget::setTabOrder(lengthCombo, addElement);
    QWidget::setTabOrder(addElement, recentCombo);
    QWidget::setTabOrder(recentCombo, bypassButton);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuHelp_2->menuAction());
    menuFile->addAction(actionOpen);
    menuFile->addAction(actionSave);
    menuFile->addAction(actionSave_As);
    menuFile->addAction(actionQuit);
    menuHelp_2->addAction(actionAbout);

    retranslateUi(MainWindow);
    QObject::connect(actionQuit, SIGNAL(activated()), MainWindow, SLOT(close()));
    QObject::connect(pauseButton, SIGNAL(toggled(bool)), noteCombo, SLOT(setDisabled(bool)));

    lengthCombo->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DreamSculpt", 0, QApplication::UnicodeUTF8));
    actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
    actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
    actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
    actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
    actionSave_As->setText(QApplication::translate("MainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
    bypassButton->setToolTip(QApplication::translate("MainWindow", "Pass data through without modification", 0, QApplication::UnicodeUTF8));
    bypassButton->setText(QApplication::translate("MainWindow", "Bypass", 0, QApplication::UnicodeUTF8));
    syncMonoButton->setText(QApplication::translate("MainWindow", "SyncMono", 0, QApplication::UnicodeUTF8));
    tempoBox->setToolTip(QApplication::translate("MainWindow", "Tempo", 0, QApplication::UnicodeUTF8));
    scaleRoot->clear();
    scaleRoot->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Off", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "C#", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "D", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "D#", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "E", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "F", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "F#", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "G", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "G#", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "A#", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8)
    );
    scaleMode->clear();
    scaleMode->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Up", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Random", 0, QApplication::UnicodeUTF8)
    );
    upButton->setText(QApplication::translate("MainWindow", "Move Up", 0, QApplication::UnicodeUTF8));
    downButton->setText(QApplication::translate("MainWindow", "Move Down", 0, QApplication::UnicodeUTF8));
    deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
    pauseButton->setText(QApplication::translate("MainWindow", "Pause", 0, QApplication::UnicodeUTF8));
    lengthCombo->clear();
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/2b.xpm")), QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/semibreve.xpm")), QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/minim.xpm")), QApplication::translate("MainWindow", "1/2", 0, QApplication::UnicodeUTF8));
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/14.xpm")), QApplication::translate("MainWindow", "1/4", 0, QApplication::UnicodeUTF8));
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/quaver.xpm")), QApplication::translate("MainWindow", "1/8", 0, QApplication::UnicodeUTF8));
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/semiquaver.xpm")), QApplication::translate("MainWindow", "1/16", 0, QApplication::UnicodeUTF8));
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/demisemi.xpm")), QApplication::translate("MainWindow", "1/32", 0, QApplication::UnicodeUTF8));
    lengthCombo->addItem(QIcon(QString::fromUtf8(":/new/prefix1/gfx/hemidemisemi.xpm")), QApplication::translate("MainWindow", "1/64", 0, QApplication::UnicodeUTF8));
    addElement->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Recent files</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    menuHelp_2->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

#endif // UI_MAINWINDOW_H
