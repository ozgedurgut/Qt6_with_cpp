#include "studentform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StudentForm w;
    w.show();
    return a.exec();
}
