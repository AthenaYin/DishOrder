#include <QtGui/QApplication>
#include "dialog.h"
#include <ui_dialog.h>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
