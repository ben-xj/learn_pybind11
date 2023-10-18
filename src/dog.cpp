#include <string>
#include <iostream>
#include <pybind11/pybind11.h>
#include "dog.h"

std::string Dog::Bark() const
{
    return name_ + " barks!";
}
