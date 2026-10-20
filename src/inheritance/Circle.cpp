#include "Circle.hpp"

#include <iostream>
#include <sstream>

Circle::Circle(Point center, double radius)
: Figure(new Point[1]{center}, 1, false), center(center), radius(radius)
{

}

Circle::Circle(const Circle& other)
: Figure(other) 
, center(other.center)
, radius(other.radius)
{

}

std::string Circle::toString() const
{
    return "Circle: center = " + center.toString() + ", radius = " + std::to_string(radius);
}

void Circle::draw() const
{
    Figure::draw();

    std::cout << "Намальовано коло: " << toString() << std::endl;
}

