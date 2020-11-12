cmake_minimum_required(VERSION 2.8.7)

project(first_exercice)



find_package(Qt5 COMPONENTS Widgets Declarative)

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})



#slicerExecutionModel
find_package(SlicerExecutionModel REQUIRED GenerateCLP)
include(${SlicerExecutionModel_USE_FILE})
include(${GenerateCLP_USE_FILE})



set(first_exercice_SOURCE first_exercice.cpp)
GENERATECLP(first_exercice_SOURCE first_exercice.xml)




add_executable(first_exercice first_exercice.cpp)
configure_file(first_exerciceConfig.h.in first_exerciceConfig.h)
target_include_directories(first_exercice PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
target_link_libraries(first_exercice ${ITK_LIBRARIES})




# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)












