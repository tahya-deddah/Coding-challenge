
#include "myWindow.hpp"
#include <iostream>
#include<stdlib.h>
#include <string>
#include "ui_mainwindow.h"

#include <iostream>
#include <QPixmap>
#include <QPainter>
#include <QtGui>
#include <QImage>


#include "itkImage.h"
#include "itkImageFileReader.h"
#include "itkMedianImageFilter.h"
#include "itkImageFileWriter.h"

using namespace std;



myWindow::myWindow(QWidget *parent)
    :QMainWindow(parent),ui(new Ui::MainWindow)
{
    std::cout<<"Generate the new Window"<<std::endl;

    //Setup the graphical layout on this current Widget
    ui->setupUi(this);

    //Links buttons and actions
   
    connect(ui->Button,SIGNAL(clicked()),this,SLOT(actionButton1()));
    connect(ui->Button_2,SIGNAL(clicked()),this,SLOT(actionButton2()));
    connect(ui->Button_3,SIGNAL(clicked()),this,SLOT(actionButton3()));
    connect(ui->Button_4,SIGNAL(clicked()),this,SLOT(actionButton4()));
    connect(ui->Button_5,SIGNAL(clicked()),this,SLOT(actionButton5()));
    connect(ui->lineEdit,SIGNAL(editingFinished()),this,SLOT(actionTextEdit()));
    connect(ui->lineEdit_1,SIGNAL(editingFinished()),this,SLOT(actionTextEdit_1()));
    connect(ui->lineEdit_2,SIGNAL(editingFinished()),this,SLOT(actionTextEdit_2()));
    connect(ui->lineEdit_3,SIGNAL(editingFinished()),this,SLOT(actionTextEdit_3()));
}

myWindow::~myWindow()
{
    std::cout<<"Destructor of myWindow is called"<<std::endl;
}

void myWindow::actionButton1()
{
    std::cout<<"output image shoosed"<<std::endl;
    std::string str = myWindow::actionTextEdit_1();
    const char* output_image = const_cast<char*>(str.c_str());
    int x ;
    x =atoi(output_image);

    std::cout <<x<<std::endl;
}

std::string myWindow::actionButton2()
{
    std::cout<<"Button 2 click"<<std::endl;


    typedef unsigned char          png;
    const unsigned int             Dimension = 2;
    typedef itk::Image< png, Dimension >   InputImageType;
    typedef itk::ImageFileReader< InputImageType >  ReaderType;
    ReaderType::Pointer reader = ReaderType::New();
    std::string filename_input = myWindow::actionTextEdit();;
    reader->SetFileName( filename_input );



    typedef itk::Image< png, Dimension >   OutputImageType;
    typedef itk::ImageFileWriter< OutputImageType >  WriterType;
    WriterType::Pointer writer = WriterType::New();
    std::string filename_output=  myWindow::actionTextEdit_1();
    writer->SetFileName( filename_output );

// instanciate the filtre
    typedef itk::MedianImageFilter<InputImageType, OutputImageType >  FilterType;
    FilterType::Pointer filter = FilterType::New();

    // parametres of the filtres:
    InputImageType::SizeType indexRadius;

    std::string parametre_1 = myWindow::actionTextEdit_2();
    std::string parametre_2 = myWindow::actionTextEdit_3();

    const char* parametre1 = const_cast<char*>(parametre_1.c_str());
    const char* parametre2 = const_cast<char*>(parametre_2.c_str());


    indexRadius[0] = atoi(parametre1); // radius along x
    indexRadius[1] = atoi(parametre2); // radius along y
    filter->SetRadius( indexRadius );

    // filter the input image
    filter->SetInput( reader->GetOutput() );
    writer->SetInput( filter->GetOutput() );
    writer->Update();

    return filename_output;

}


void myWindow::actionButton3()
{
    std::cout<<"Button 3 click"<<std::endl;
    std::string out_put = myWindow::actionButton2();
    char* output_image = const_cast<char*>(out_put.c_str());
    QPixmap p(output_image);
    ui->label2->setPixmap(p);
    ui->label2->setScaledContents(true);
    ui->label2->adjustSize();
    ui->label2->setGeometry(200,280,150,150);
 
}



void myWindow::actionButton4()
{
    std::cout<<"image saved"<<std::endl;
}

void myWindow::actionButton5()
{
    std::cout<<"image choisi"<<std::endl;
    std::string str = myWindow::actionTextEdit();
    char* c = const_cast<char*>(str.c_str());
    QPixmap pm(c);
    ui->label1->setPixmap(pm);
    ui->label1->setScaledContents(true);
    ui->label1->adjustSize();
    ui->label1->setGeometry(30,280,150,150);
    


}


std::string myWindow::actionTextEdit()
{
    std::cout<<"Text edit: ["<<ui->lineEdit->text().toStdString()<<"]"<<std::endl;

   
    return ui->lineEdit->text().toStdString();
}


std::string myWindow::actionTextEdit_1()
{
    std::cout<<"Text edit: ["<<ui->lineEdit_1->text().toStdString()<<"]"<<std::endl;

   
    return ui->lineEdit_1->text().toStdString();
}

std::string myWindow::actionTextEdit_2()
{
    std::cout<<"Text edit: ["<<ui->lineEdit_2->text().toStdString()<<"]"<<std::endl;

   
    return ui->lineEdit_2->text().toStdString();
}

std::string myWindow::actionTextEdit_3()
{
    std::cout<<"Text edit: ["<<ui->lineEdit_3->text().toStdString()<<"]"<<std::endl;

   
    return ui->lineEdit_3->text().toStdString();
}
