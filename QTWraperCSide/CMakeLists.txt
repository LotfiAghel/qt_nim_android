cmake_minimum_required(VERSION 3.5)

project(QTWraperCSide LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)




if(NOT DEFINED INSTALL_EXAMPLESDIR)
  set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/opengl/2dpainting")

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Widgets)
find_package(Qt6 COMPONENTS OpenGL)
find_package(Qt6 COMPONENTS OpenGLWidgets)



add_library(QTWraperCSide SHARED
    QTWraperCSide_global.h
    qtwrapercside.cpp
    qtwrapercside.h

    glwidget.h
    helper.h
    widget.h
    window.h

    glwidget.cpp
    helper.cpp
    widget.cpp
    window.cpp
)

target_link_libraries(QTWraperCSide PRIVATE Qt6::Core Qt6::Widgets Qt6::OpenGLWidgets)

target_compile_definitions(QTWraperCSide PRIVATE QTWRAPERCSIDE_LIBRARY)
