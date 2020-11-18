cmake_minimum_required(VERSION 2.8.7)

project(first_exercice)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)
set_target_properties(Qt5::Core PROPERTIES MAP_IMPORTED_CONFIG_COVERAGE "RELEASE")




find_package(ITK REQUIRED)
include(${ITK_USE_FILE})
QT5_WRAP_CPP(source_files_moc src/myWindow.hpp)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})



#slicerExecutionModel
find_package(SlicerExecutionModel REQUIRED GenerateCLP)
include(${SlicerExecutionModel_USE_FILE})
include(${GenerateCLP_USE_FILE})



set(first_exercice_SOURCE first_exercice.cpp)
GENERATECLP(first_exercice_SOURCE first_exercice.xml)


add_executable(first_exercice first_exercice.cpp myWindow.hpp myWindow.cpp ui_mainwindow.h)
configure_file(first_exerciceConfig.h.in first_exerciceConfig.h)
target_include_directories(first_exercice PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
target_link_libraries(first_exercice ${ITK_LIBRARIES})
target_link_libraries(first_exercice Qt5::Widgets)




# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)












