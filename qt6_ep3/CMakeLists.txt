cmake_minimum_required(VERSION 3.28)
project(qt6_ep3)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/chooble/Documents/Qt/6.7.2/macos/lib/cmake")

include_directories()

find_package(Qt6 COMPONENTS
	Core
	REQUIRED)

add_executable(qt6_ep3 src/main.cpp
	src/test.cpp
	include/test.h)
target_link_libraries(qt6_ep3
	Qt::Core
)

