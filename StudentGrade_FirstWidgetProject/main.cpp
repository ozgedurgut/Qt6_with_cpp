#include "studentgradeform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StudentGradeForm w;
    w.show();
    return a.exec();
}
