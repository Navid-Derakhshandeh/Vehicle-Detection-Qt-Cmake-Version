cmake_minimum_required(VERSION 3.5)
project(VehicleDetection LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)
find_package(OpenCV REQUIRED)

add_executable(VehicleDetection
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_link_libraries(VehicleDetection
    Qt5::Widgets
    ${OpenCV_LIBS}
)
