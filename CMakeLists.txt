# Minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Project name and description
project(fileCombiner CXX)

# Add source files
add_executable(fileCombiner src/main.cpp)

# Set C++ standard (optional)
target_compile_features(fileCombiner PRIVATE cxx_std_11)

target_include_directories(fileCombiner PRIVATE include/)