#include "inheritance/Point.hpp"
#include "inheritance/Figure.hpp"
#include "inheritance/Circle.hpp"

// #include "Employee.hpp"

// #include "Account.hpp"
// #include "User.hpp"

// void classLinks()
// {
    
// }

void inheritanceExample()
{
    Point point1(1.0, 2.0);
    Point point2(3.0, 4.0);
    Point* points = new Point[2]{point1, point2};

    Figure figure(points, 2, true);
    figure.draw();

    Circle circle(point1, 5.0);
    circle.draw();
}

int main()
{
    // Employee employee;
    // Employee employee2("John", "Doe", 30);

    // employee.printInfo();
    // employee2.printInfo();

    // classLinks();
    inheritanceExample();
}