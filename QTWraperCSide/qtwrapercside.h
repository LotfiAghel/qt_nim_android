#ifndef QTWRAPERCSIDE_H
#define QTWRAPERCSIDE_H
#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QHash>
#include <QtCore/QMetaMethod>
#include <QtCore/QAbstractItemModel>
#include <QtCore/QAbstractListModel>
#include <QtCore/QAbstractTableModel>
#include <QTimer>
#include <QApplication>
#include <QPushButton>
#include "QTWraperCSide_global.h"
#include <string>

extern "C"{
extern   int getInt(){return 123;}
 extern   char* createHello();
 extern   QApplication* createApp();
 extern   QPushButton* createBtn(QApplication *app,char s[],void (*foo)());
 extern   void runApp(QApplication *app);
}

class QTWRAPERCSIDE_EXPORT QTWraperCSide
{
public:
    static QWidget *w;
    QTWraperCSide();
    int x,y;
};

#endif // QTWRAPERCSIDE_H
