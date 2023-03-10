#ifndef STUDENTGRADEFORM_H
#define STUDENTGRADEFORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentGradeForm; }
QT_END_NAMESPACE

class StudentGradeForm : public QMainWindow
{
    Q_OBJECT

public:
    StudentGradeForm(QWidget *parent = nullptr);
    ~StudentGradeForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StudentGradeForm *ui;
};
#endif // STUDENTGRADEFORM_H
