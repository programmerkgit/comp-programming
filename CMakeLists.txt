# Set version of CMake
cmake_minimum_required(VERSION 3.20)

# Set project name and language
project(comp_programmings)

set(CMAKE_CXX_STANDARD 14)

# generate comp_programmings.out from main.cpp
add_executable(comp_programmings main.cpp aizdu-online/1/DMaximumProfit.cpp aizdu-online/1/DMaximumProfit.h aoj_lessonitp/1/DWatch.cpp aoj_lessonitp/1/DWatch.h)  # add_executable(comp_programmings main.cpp hello.cpp)