# Pybind11 template project.

Now include a simple example of using pybind11 to wrap some c++ functions and a c++ class.

## Usage

### Prerequisites

cmake, python3, pybind11

### Building

0. Install pybind11: `pip install pybind11`
1. Clone the repository.
2. Create a build directory: `mkdir build && cd build`
3. Generate the build files using CMake: `cmake ..`
4. Build the project: `make`
5. Install the project: `make install`

### Running tests

run `pytest` in the root directory.

## todo

1. generate pyi
2. use stl
3. use numpy
4. dict, set, tuple, list