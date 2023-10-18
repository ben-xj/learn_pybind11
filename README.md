# Project Name

Pybind11 template project.

## Usage

### Prerequisites

cmake, python3, pybind11

### Building

1. Clone the repository.
2. Modify CMakeLists.txt file in the root folder, set pybind11Config.cmake path to your own: `set(CMAKE_PREFIX_PATH "/miniconda3/envs/pybind/lib/python3.11/site-packages/pybind11/share/cmake/pybind11")`
2. Create a build directory: `mkdir build && cd build`
3. Generate the build files using CMake: `cmake ..`
4. Build the project: `make`

### Running tests

simply run `pytest` in the root folder.