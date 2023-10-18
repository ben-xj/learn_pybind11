cmake_minimum_required(VERSION 3.20)
project(math_util)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_PREFIX_PATH "/home/ben/miniconda3/envs/pybind/lib/python3.11/site-packages/pybind11/share/cmake/pybind11")
find_package(pybind11 REQUIRED)

add_subdirectory(src)