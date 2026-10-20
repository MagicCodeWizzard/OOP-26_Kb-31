#include "Figure.hpp"

#include <iostream>
#include <sstream>

Figure::Figure(Point* points, int numberOfPoints, bool isPlaced)
: points(points), numberOfPoints(numberOfPoints), isPlaced(isPlaced)
{

}

Figure::Figure(const Figure& other)
: points(nullptr), numberOfPoints(other.numberOfPoints), isPlaced(other.isPlaced)
{
    if (other.points != nullptr && other.numberOfPoints > 0)
    {
        points = new Point[other.numberOfPoints];
        for (int i = 0; i < other.numberOfPoints; ++i)
        {
            points[i] = other.points[i];
        }
    }
}

Figure::~Figure()
{
    if (points != nullptr)
    {
        delete points;
        points = nullptr;
    }
}

std::string Figure::toString() const
{
    return "Figure";
}

Point* Figure::getPoints() const
{
    return points;
}

bool Figure::getIsPlaced() const
{
    return isPlaced;
}

void Figure::draw() const
{
    if (points == nullptr) {
        return;
    }

    std::cout << "Намальовано фігуру: " << toString() << std::endl;

    for (int i = 0; i < numberOfPoints; ++i) {
        points[i].draw();
    }
}

