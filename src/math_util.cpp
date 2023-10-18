#include <pybind11/pybind11.h>

#include "math_util.h"

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}
