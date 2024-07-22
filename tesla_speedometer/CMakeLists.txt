cmake_minimum_required(VERSION 3.28)
project(tesla_speedometer)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/chooble/Documents/Qt/6.7.2/macos/lib/cmake")

include_directories(${PROJECT_SOURCE_DIR})

find_package(Qt6 COMPONENTS
	Core
	Gui
	Widgets
	REQUIRED)

add_executable(tesla_speedometer main.cpp
	src/SpeedometerWidget.cpp
	include/SpeedometerWidget.h
	ui/SpeedometerWidget.ui
	src/IndicatorWidget.cpp
	include/IndicatorWidget.h
	ui/IndicatorWidget.ui
	src/ControlButtonWidget.cpp
	include/ControlButtonWidget.h
	ui/ControlButtonWidget.ui
	src/Car.cpp
	include/Car.h
	src/Speedometer.cpp
	include/Speedometer.h)
target_link_libraries(tesla_speedometer
	Qt::Core
	Qt::Gui
	Qt::Widgets
)

