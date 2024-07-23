cmake_minimum_required(VERSION 3.28)
project(tesla_speedometer)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/chooble/Documents/Qt/6.7.2/macos/lib/cmake")

set(SOURCE_FILES
	main.cpp
	src/Speedometer.cpp
	src/SpeedometerWidget.cpp
	src/IndicatorWidget.cpp
	src/ControlButtonWidget.cpp
	src/Car.cpp
)

set(HEADER_FILES
	include/SpeedometerWidget.h
	include/IndicatorWidget.h
	include/ControlButtonWidget.h
	include/Car.h
	include/Speedometer.h
)

set(UI_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/ui/SpeedometerWidget.ui
	${CMAKE_CURRENT_SOURCE_DIR}/ui/IndicatorWidget.ui
	${CMAKE_CURRENT_SOURCE_DIR}/ui/ControlButtonWidget.ui
)

include_directories(${PROJECT_SOURCE_DIR}/include ${CMAKE_BINARY_DIR})

find_package(Qt6 COMPONENTS
	Core
	Gui
	Widgets
	REQUIRED)

add_executable(tesla_speedometer
	${SOURCE_FILES}
	${HEADER_FILES}
	${UI_FILES}
)

# AUTOGEN 경로 포함
target_include_directories(tesla_speedometer PRIVATE
	${CMAKE_CURRENT_BINARY_DIR})

# UI 파일 자동 생성 경로 설정
set_property(TARGET tesla_speedometer PROPERTY AUTOUIC_SEARCH_PATHS
	${CMAKE_CURRENT_SOURCE_DIR}/ui)

target_link_libraries(
	tesla_speedometer
	Qt::Core
	Qt::Gui
	Qt::Widgets
)