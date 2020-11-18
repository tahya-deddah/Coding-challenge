#pragma once

#ifndef MYWINDOW_HPP
#define MYWINDOW_HPP

#include <QMainWindow>
#include <QPixmap>
#include "ui_mainwindow.h"


//Forward declaration of Ui::MainWindow;
namespace Ui{
class MainWindow;
}

//Declaration of myWindow
class myWindow: public QMainWindow
{
    Q_OBJECT

public:

    myWindow(QWidget *parent=0);
    ~myWindow();

private slots:
    
    void actionButton1();
    void actionButton3();
    void actionButton4();
    void actionButton5();
    std::string actionButton2();
    std::string actionTextEdit();
    std::string actionTextEdit_1();
    std::string actionTextEdit_2();
    std::string actionTextEdit_3();
private:

    Ui::MainWindow *ui;

};

#endif