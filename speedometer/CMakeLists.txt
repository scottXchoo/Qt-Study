cmake_minimum_required(VERSION 3.28)
project(speedometer)

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

add_executable(speedometer main.cpp
	src/Speedometer.cpp
	include/Speedometer.h
	src/SpeedometerWidget.cpp
	include/SpeedometerWidget.h
	ui/SpeedometerWidget.ui
	src/IndicatorWidget.cpp
	include/IndicatorWidget.h
	ui/IndicatorWidget.ui
	src/ControlButtonsWidget.cpp
	include/ControlButtonsWidget.h
	ui/ControlButtonsWidget.ui)
target_link_libraries(speedometer
	Qt::Core
	Qt::Gui
	Qt::Widgets
)

