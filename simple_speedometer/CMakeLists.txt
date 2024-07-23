cmake_minimum_required(VERSION 3.28)
project(simple_speedometer)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/chooble/Documents/Qt/6.7.2/macos/lib/cmake")

# 소스 파일 및 헤더 파일 설정
set(SOURCE_FILES
	main.cpp
	src/Car.cpp
	src/CarInfo.cpp
)

set(HEADER_FILES
	include/Car.h
	include/CarInfo.h
)

# UI 파일 설정
set(UI_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/ui/CarInfo.ui
)

# include 디렉토리 설정
include_directories(${PROJECT_SOURCE_DIR}/include ${CMAKE_BINARY_DIR})

# Qt 라이브러리 찾기
find_package(Qt6 COMPONENTS
	Core
	Gui
	Widgets
	REQUIRED)

# 실행 파일 생성
add_executable(simple_speedometer
	${SOURCE_FILES}
	${HEADER_FILES}
	${UI_FILES}
)

# AUTOGEN 경로 포함
target_include_directories(simple_speedometer PRIVATE
	${CMAKE_CURRENT_BINARY_DIR})

# UI 파일 자동 생성 경로 설정
set_property(TARGET simple_speedometer PROPERTY AUTOUIC_SEARCH_PATHS
	${CMAKE_CURRENT_SOURCE_DIR}/ui)

# Qt 라이브러리 연결
target_link_libraries(
	simple_speedometer
	Qt::Core
	Qt::Gui
	Qt::Widgets
)
