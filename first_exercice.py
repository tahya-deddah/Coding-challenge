

import itk
import sys
import vtk
import argparse





# input arguments  
parser = argparse.ArgumentParser()
parser.add_argument("input_image",type=str)
parser.add_argument("output_image",type=str)
parser.add_argument("radius",type=int)
args = parser.parse_args()


# apply a median filter to the input image 
image = itk.imread(args.input_image)
median = itk.median_image_filter(image, radius=args.radius)
itk.imwrite(median, args.output_image)



#create a vtk window
rw = vtk.vtkRenderWindow()
iren = vtk.vtkRenderWindowInteractor()
iren.SetRenderWindow(rw)


# display the input image    
ren1 = vtk.vtkRenderer()
rw.AddRenderer(ren1)
ren1.SetViewport(0,0,.5,1)

reader1 = vtk.vtkPNGReader()
reader1.SetFileName(args.input_image)
reader1.Update()

actor1 = vtk.vtkImageActor()
actor1.GetMapper().SetInputConnection(reader1.GetOutputPort())

ren1.AddActor(actor1)
ren1.ResetCamera()



# display the output image ( filtred image)
ren2= vtk.vtkRenderer()
rw.AddRenderer(ren2)
ren2.SetViewport(.5,0,1,1)

reader2 = vtk.vtkPNGReader()
reader2.SetFileName(args.output_image)
reader2.Update()

actor2 = vtk.vtkImageActor()
actor2.GetMapper().SetInputConnection(reader2.GetOutputPort())

ren2.AddActor(actor2)
ren2.ResetCamera()
 

# display the vtk window with two images   
rw.Render()
rw.SetWindowName('RW: Multiple ViewPorts')
iren.Start()










