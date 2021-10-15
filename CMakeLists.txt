cmake_minimum_required(VERSION 3.20)
project(project_activities)

set(CMAKE_CXX_STANDARD 23)

set(SOURCE_FILES main.cpp lesson_3/3_01/main.cpp lesson_3/3_02/main.cpp lesson_3/3_03/main.cpp lesson_4/4_01/main.cpp lesson_4/4_02/main.cpp lesson_4/4_03/main.cpp lesson_4/4_04/main.cpp lesson_4/4_05/main.cpp lesson_4/4_06/main.cpp lesson_5/5_01/main.cpp)
add_executable(project_activities ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(project_activities sfml-system sfml-window sfml-graphics sfml-audio sfml-network)

add_subdirectory(lesson_3/3_01)
add_subdirectory(lesson_3/3_02)
add_subdirectory(lesson_3/3_03)
add_subdirectory(lesson_4/4_01)
add_subdirectory(lesson_4/4_02)
add_subdirectory(lesson_4/4_03)
add_subdirectory(lesson_4/4_04)
add_subdirectory(lesson_4/4_05)
add_subdirectory(lesson_4/4_06)
add_subdirectory(lesson_5/5_01)