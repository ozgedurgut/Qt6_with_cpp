#include "studentform.h"
#include "./ui_studentform.h"
#include <QList>

StudentForm::StudentForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentForm)
{
    ui->setupUi(this);
}

StudentForm::~StudentForm()
{
    delete ui;
}

void StudentForm::infoEntry()
{
    QString name;
    QString surname;
    int grade1;
    int grade2;
    int grade3;
    double ave;

    name = ui->edtName->text();
    surname = ui->edtSurname->text();
    grade1 = ui->edtGrade1->text().toInt();
    grade2 = ui->edtGrade2->text().toInt();
    grade3 = ui->edtGrade3->text().toInt();
    ave = (grade1+grade2+grade3)/3.0;

    studentAverages.append(ave);

    ui->edtName->setText("");
    ui->edtSurname->setText("");
    ui->edtGrade1->setText("");
    ui->edtGrade2->setText("");
    ui->edtGrade3->setText("");
}

double StudentForm::average(QList<double> nums, int numOfElements)
{
    double tempAverage =0;
    for(int i =0; i<numOfElements;i++){
        tempAverage += nums[i]/numOfElements;
    }
    return tempAverage;
}

void StudentForm::solution()
{
    double classAverage;
    infoEntry();
    classAverage = average(studentAverages,studentAverages.count());
    ui->label_6->setText(QString::number(classAverage));
    ui->label_7->setText(QString::number(studentAverages.count() ));
}

void StudentForm::on_pushButton_clicked()
{
    solution();
}
