/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button_5;
    QPushButton *Button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_4;
    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));


        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(170, 230, 92, 27));


        Button = new QPushButton(centralwidget);
        Button->setObjectName(QString::fromUtf8("Button"));
        Button->setGeometry(QRect(250, 200, 92, 27));



        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(280, 20, 151, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Button_2 = new QPushButton(verticalLayoutWidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));

        verticalLayout->addWidget(Button_2);

        Button_3 = new QPushButton(verticalLayoutWidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));

        verticalLayout->addWidget(Button_3);

        Button_4 = new QPushButton(verticalLayoutWidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));

        verticalLayout->addWidget(Button_4);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 260, 65, 15));

        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(50, 270, 59, 15));


        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(50, 270, 59, 15));



        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 230, 113, 25));

        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(30, 200, 200, 25));


        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 40, 100, 25));


        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 70, 100, 25));


        label_3= new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 260, 70, 15));




        MainWindow->setCentralWidget(centralwidget);

        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 442, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Button_5->setText(QApplication::translate("MainWindow", "Enter", 0));
        Button->setText(QApplication::translate("MainWindow", "Enter", 0));
        Button_2->setText(QApplication::translate("MainWindow", "filter input image", 0));
        Button_3->setText(QApplication::translate("MainWindow", "display output image", 0));
        Button_4->setText(QApplication::translate("MainWindow", "save output image", 0));
        label->setText(QApplication::translate("MainWindow", "input image", 0));
        //label->setText(QApplication::translate("MainWindow", "L\303\251gende", 0));
        label1->setText(QApplication::translate("MainWindow", "", 0));
        label2->setText(QApplication::translate("MainWindow", "", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "choose an image", 0));
        lineEdit_1->setText(QApplication::translate("MainWindow", "choose where you save output image", 0));
        lineEdit_2->setText(QApplication::translate("MainWindow", "1st parameter", 0));
        lineEdit_3->setText(QApplication::translate("MainWindow", "2nd parameter", 0));
        label_3->setText(QApplication::translate("MainWindow", "output image", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
