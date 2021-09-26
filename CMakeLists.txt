#cmake_minimum_required(VERSION 3.20)
#project(project_activities)
#
#set(CMAKE_CXX_STANDARD 23)
#
#add_executable(project_activities main.cpp)

cmake_minimum_required(VERSION 3.20)
project(project_activities)

set(CMAKE_CXX_STANDARD 23)

set(SOURCE_FILES main.cpp 01/main.cpp 02/main.cpp 03/main.cpp)
add_executable(project_activities ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(project_activities sfml-system sfml-window sfml-graphics sfml-audio sfml-network)

add_subdirectory(01)
add_subdirectory(02)