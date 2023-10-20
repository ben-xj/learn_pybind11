cmake_minimum_required(VERSION 3.20)
project(math_util)

set(CMAKE_CXX_STANDARD 14)

if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

find_package(Python 3.10 COMPONENTS Interpreter Development.Module REQUIRED)

# Detect the installed pybind11 package and import it into CMake
execute_process(
  COMMAND "${Python_EXECUTABLE}" -m pybind11 --cmakedir
  OUTPUT_STRIP_TRAILING_WHITESPACE OUTPUT_VARIABLE PY_DIR)
list(APPEND CMAKE_PREFIX_PATH "${PY_DIR}")
find_package(pybind11 CONFIG REQUIRED)

add_subdirectory(src)