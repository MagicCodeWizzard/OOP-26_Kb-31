#include "Employee.hpp"

int main()
{
    Employee employee;
    Employee employee2("John", "Doe", 30);

    employee.printInfo();
    employee2.printInfo();
}