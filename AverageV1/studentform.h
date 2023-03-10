#ifndef STUDENTFORM_H
#define STUDENTFORM_H

#include <QDialog>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentForm; }
QT_END_NAMESPACE

class StudentForm : public QDialog
{
    Q_OBJECT

public:
    StudentForm(QWidget *parent = 0);
    ~StudentForm();
    void infoEntry();
    double average(QList<double>nums, int numOfElements);
    void solution();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StudentForm *ui;
    QList<double> studentAverages;
};
#endif // STUDENTFORM_H
