#include <pybind11/pybind11.h>
#include "math_util.h"

namespace py = pybind11;

PYBIND11_MODULE(math_util, m)
{
    m.doc() = "math utilities";
    m.def("add", (int (*)(int, int)) & add, "add two integers");
    m.def("add", (double (*)(double, double)) & add, "add two doubles");
}