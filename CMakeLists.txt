CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD_11)
list( APPEND CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")




ADD_EXECUTABLE(recommend
main.cpp
menu.cpp
genre.cpp
scan.cpp
movie.cpp
mainFunctions.cpp
display.cpp
)

ADD_EXECUTABLE(test
unit_test.cpp
genre.cpp
scan.cpp
movie.cpp
display.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
