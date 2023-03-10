#include "studentgradeform.h"
#include "./ui_studentgradeform.h"

StudentGradeForm::StudentGradeForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StudentGradeForm)
{
    ui->setupUi(this);
}

StudentGradeForm::~StudentGradeForm()
{
    delete ui;
}


void StudentGradeForm::on_pushButton_clicked()
{
    int grade1, grade2, grade3;
    double average;
    QString message;

    grade1 = ui->lineEdit_3->text().toInt();
    grade2 = ui->lineEdit_4->text().toInt();
    grade3 = ui->lineEdit_5->text().toInt();

    average = (grade1+grade2+grade3)/3.0;
    message = "Average %1";
    ui->label_6->setText(message.arg(average));
}

