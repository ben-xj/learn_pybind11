#include <pybind11/pybind11.h>
#include "dog.h"

namespace py = pybind11;

PYBIND11_MODULE(dog, m)
{
    py::class_<Dog>(m, "Dog")
        .def(py::init<std::string, int>())
        .def("get_name", &Dog::GetName)
        .def("get_age", &Dog::GetAge)
        .def("bark", &Dog::Bark);
}
