# Pybind11 template project.

a simple example of using pybind11 to wrap c++ functions and a c++ class.

## Usage

### Prerequisites

cmake, python3, pybind11, pytest

```shell
# install pybind11 and pytest
pip install pybind11 pytest
```

### Building

1. Clone the repository.
2. Create a build directory: `mkdir build && cd build`
3. Generate the build files using CMake: `cmake ..`
4. Build the project: `make`
5. Install the project: `make install`

### Running tests

run `pytest` in the root directory.
