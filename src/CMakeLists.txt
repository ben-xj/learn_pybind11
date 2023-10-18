pybind11_add_module(math_util MODULE math_util.cpp math_util_bindings.cpp)
pybind11_add_module(dog MODULE dog.cpp dog_bindings.cpp)

target_link_libraries(math_util PRIVATE pybind11::module)