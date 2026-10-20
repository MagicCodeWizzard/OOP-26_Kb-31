#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee
{
public:
    Employee();
    Employee(std::string name, std::string last_name, int age);

    Employee(const Employee& other);

    ~Employee();

    void printInfo();

private:
    std::string name;
    std::string last_name;
    int age;
};

#endif
