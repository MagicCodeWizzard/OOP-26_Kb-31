#include <iostream>

#include "Employee.hpp"

Employee::Employee()
{
    std::cout << "Default constructor called" << std::endl;

    name = "Unknown";
    last_name = "Unknown";
    age = 0;
}
    
Employee::Employee(std::string name, std::string last_name, int age)
{
    std::cout << "Constructor with param list called" << std::endl;

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

Employee::~Employee()
{
    std::cout << "Destructor called" << std::endl;
}

void Employee::printInfo()
{
     std::cout << "Name: " << name 
               << ", Last name: " << last_name
               << ", Age: " << age << std::endl; 
}