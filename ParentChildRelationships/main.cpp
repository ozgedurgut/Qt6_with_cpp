#include <QCoreApplication>
#include <QTimer>
#include "test.h"

//Setting in the constructor
Test* getTest(QObject* parent){
    return new Test(parent);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer timer;
    timer.singleShot(3000,&a,&QCoreApplication::quit);
    int value = a.exec();
    qInfo() << "Exit code:" << value;
    return value;
}
