/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Sep 1 23:01:51 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_MainWindow[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      39,   11,   11,   11, 0x08,
      65,   11,   11,   11, 0x08,
      90,   11,   11,   11, 0x08,
     116,   11,   11,   11, 0x08,
     149,  145,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     203,   11,   11,   11, 0x08,
     229,   11,   11,   11, 0x08,
     251,   11,   11,   11, 0x08,
     281,  275,   11,   11, 0x08,
     319,  275,   11,   11, 0x08,
     357,  275,   11,   11, 0x08,
     401,  395,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionAbout_activated()\0"
    "on_actionOpen_activated()\0"
    "on_recentCombo_clicked()\0"
    "on_actionSave_activated()\0"
    "on_actionSave_As_activated()\0val\0"
    "on_tempoBox_valueChanged(int)\0"
    "on_addElement_clicked()\0"
    "on_deleteButton_clicked()\0"
    "on_upButton_clicked()\0on_downButton_clicked()\0"
    "index\0on_scaleRoot_currentIndexChanged(int)\0"
    "on_scaleType_currentIndexChanged(int)\0"
    "on_scaleMode_currentIndexChanged(int)\0"
    "state\0on_bypassButton_clicked(bool)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
	return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionAbout_activated(); break;
        case 1: on_actionOpen_activated(); break;
        case 2: on_recentCombo_clicked(); break;
        case 3: on_actionSave_activated(); break;
        case 4: on_actionSave_As_activated(); break;
        case 5: on_tempoBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_addElement_clicked(); break;
        case 7: on_deleteButton_clicked(); break;
        case 8: on_upButton_clicked(); break;
        case 9: on_downButton_clicked(); break;
        case 10: on_scaleRoot_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: on_scaleType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: on_scaleMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: on_bypassButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 14;
    }
    return _id;
}
