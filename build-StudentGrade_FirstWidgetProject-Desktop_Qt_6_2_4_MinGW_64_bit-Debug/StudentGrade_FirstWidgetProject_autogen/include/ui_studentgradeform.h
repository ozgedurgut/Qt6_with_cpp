/********************************************************************************
** Form generated from reading UI file 'studentgradeform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTGRADEFORM_H
#define UI_STUDENTGRADEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentGradeForm
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentGradeForm)
    {
        if (StudentGradeForm->objectName().isEmpty())
            StudentGradeForm->setObjectName(QString::fromUtf8("StudentGradeForm"));
        StudentGradeForm->resize(800, 600);
        centralwidget = new QWidget(StudentGradeForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 40, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 81, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 81, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 110, 81, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 140, 81, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 170, 81, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 200, 81, 16));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 70, 113, 24));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 100, 113, 24));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 130, 113, 24));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 160, 113, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 40, 80, 24));
        StudentGradeForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentGradeForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        StudentGradeForm->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentGradeForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StudentGradeForm->setStatusBar(statusbar);

        retranslateUi(StudentGradeForm);

        QMetaObject::connectSlotsByName(StudentGradeForm);
    } // setupUi

    void retranslateUi(QMainWindow *StudentGradeForm)
    {
        StudentGradeForm->setWindowTitle(QCoreApplication::translate("StudentGradeForm", "StudentGradeForm", nullptr));
        label->setText(QCoreApplication::translate("StudentGradeForm", "Student Name:", nullptr));
        label_2->setText(QCoreApplication::translate("StudentGradeForm", "Surname", nullptr));
        label_3->setText(QCoreApplication::translate("StudentGradeForm", "Grade 1:", nullptr));
        label_4->setText(QCoreApplication::translate("StudentGradeForm", "Grade 2:", nullptr));
        label_5->setText(QCoreApplication::translate("StudentGradeForm", "Grade 3:", nullptr));
        label_6->setText(QCoreApplication::translate("StudentGradeForm", "Average:", nullptr));
        pushButton->setText(QCoreApplication::translate("StudentGradeForm", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentGradeForm: public Ui_StudentGradeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTGRADEFORM_H
