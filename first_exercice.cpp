#include <iostream>
#include  "first_exerciceCLP.h"

// ITK
#include "itkImage.h"
#include "itkImageFileReader.h"
#include "itkMedianImageFilter.h"
#include "itkImageFileWriter.h"

//VTK
#include <vtkPNGReader.h>
#include <vtkImageData.h>
#include <vtkImageMapper.h> // Note: this is a 2D mapper (cf. vtkImageActor which is 3D)
#include <vtkActor2D.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>


// QT
#include <QApplication>
#include <QtWidgets>
#include <QtGui>
#include "myWindow.hpp"
#include "ui_mainwindow.h"




int  main(int argc, char** argv) 
{
	PARSE_ARGS;

    // read the input image
	typedef unsigned char          png;
	const unsigned int             Dimension = 2;
	typedef itk::Image< png, Dimension >   InputImageType;
	typedef itk::ImageFileReader< InputImageType >  ReaderType;
	ReaderType::Pointer reader = ReaderType::New();
	// const char * filename_input= argv[1];
	std::string filename_input= inputImage;
	reader->SetFileName( filename_input );



	// read the output image
	typedef itk::Image< png, Dimension >   OutputImageType;
	typedef itk::ImageFileWriter< OutputImageType >  WriterType;
	WriterType::Pointer writer = WriterType::New();
	std::string filename_output= outputImage;
	writer->SetFileName( filename_output );


	// instanciate the filtre
	typedef itk::MedianImageFilter<InputImageType, OutputImageType >  FilterType;
	FilterType::Pointer filter = FilterType::New();

	// parametres of the filtres:
	InputImageType::SizeType indexRadius;
	indexRadius[0] = neighborhood[0]; // radius along x
	indexRadius[1] = neighborhood[1]; // radius along y
	filter->SetRadius( indexRadius );

	// filter the input image
	filter->SetInput( reader->GetOutput() );
	writer->SetInput( filter->GetOutput() );
	writer->Update();


	// VTK 

	vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
  	vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
  	renderWindowInteractor->SetRenderWindow(renderWindow);
  	renderWindow->SetSize(600,300);

  



  	// display input image:

  	vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    renderWindow->AddRenderer(renderer);
    renderer->SetViewport(0,0,.5,1);
    


    vtkSmartPointer<vtkPNGReader> reader_vtk = vtkSmartPointer<vtkPNGReader>::New();
	std::string filename_input_vtk= inputImage;
    char* c = const_cast<char*>(filename_input_vtk.c_str());
    reader_vtk->SetFileName(c);
    reader_vtk->Update(); 


	vtkSmartPointer<vtkImageMapper> mapper = vtkSmartPointer<vtkImageMapper>::New();
    mapper->SetInputData(reader_vtk->GetOutput());
    mapper->SetColorWindow(255); // width of the color range to map to
    mapper->SetColorLevel(127.5); // center of the color range to map to


	vtkSmartPointer<vtkActor2D> image = vtkSmartPointer<vtkActor2D>::New();
    image->SetMapper(mapper);

    renderer->AddActor(image);
    renderer->ResetCamera();
    
  


    // display output image

    vtkSmartPointer<vtkRenderer> renderer_out= vtkSmartPointer<vtkRenderer>::New();
    renderWindow->AddRenderer(renderer_out);
    renderer_out->SetViewport(.5,0,1,1);
   


    vtkSmartPointer<vtkPNGReader> reader_vtk_out = vtkSmartPointer<vtkPNGReader>::New();
	std::string filename_output_vtk= outputImage;
    char* out = const_cast<char*>(filename_output_vtk.c_str());
    reader_vtk_out->SetFileName(out);
    reader_vtk_out->Update(); 


	vtkSmartPointer<vtkImageMapper> mapper_out = vtkSmartPointer<vtkImageMapper>::New();
    mapper_out->SetInputData(reader_vtk_out->GetOutput());
    mapper_out->SetColorWindow(255); // width of the color range to map to
    mapper_out->SetColorLevel(127.5); // center of the color range to map to


	vtkSmartPointer<vtkActor2D> image_out = vtkSmartPointer<vtkActor2D>::New();
    image_out->SetMapper(mapper_out);

    renderer_out->AddActor(image_out);
    renderer_out->ResetCamera();


    // set the window

    
    renderWindow->Render();
    renderWindow->SetWindowName("input and filtred image");
	renderWindowInteractor->Start();



   // QT

	QApplication app(argc,argv);
	myWindow window;
	window.show();

    return app.exec();


 }









