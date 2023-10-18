#pragma once

#include <string>

class Dog
{
public:
    Dog(const std::string &name, int age) : name_(name), age_(age){};
    std::string GetName() const { return name_; }
    int GetAge() const { return age_; }
    std::string Bark() const;

private:
    std::string name_;
    int age_;
};
