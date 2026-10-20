#include "Point.hpp"

#include <iostream>
#include <sstream>

Point::Point(): x(0), y(0)
{

}

Point::Point(double _x, double _y)
: x(_x), y(_y)
{

}

Point::Point(const Point& other)
: x(other.x), y(other.y)
{

}

std::string Point::toString() const
{
    return "Point(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}


void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::draw() const
{
    std::cout << "Намальовано точку: " << toString() << std::endl;
}
