#include <iostream>

#include "Employee.hpp"

Employee::Employee()
{
    name = "Unknown";
    last_name = "Unknown";
    age = 0;
}
    
Employee::Employee(std::string name, std::string last_name, int age)
{
    this->name = name;
    this->last_name = last_name;
    this->age = age;
}

Employee::Employee(const Employee& other)
{
    this->name = other.name;
    this->last_name = other.last_name;
    this->age = other.age;
}

void Employee::printInfo()
{
     std::cout << "Name: " << name 
               << ", Last name: " << last_name
               << ", Age: " << age << std::endl; 
}