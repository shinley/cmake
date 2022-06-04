cmake_minimum_required(VERSION 3.21)
project(hello)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(src bin)

ADD_SUBDIRECTORY(lib)

INSTALL(TARGETS main DESTINATION bin)
INSTALL(FILES COPYRIGHT README DESTINATION share/doc/cmake/t2)
INSTALL(PROGRAMS runhello.sh DESTINATION bin)
INSTALL(DIRECTORY doc/ DESTINATION share/doc/cmake/t2)