#ifndef FIGURE_HPP
#define FIGURE_HPP

#include "Point.hpp"

class Figure
{
public:
    Figure(Point* points, int numberOfPoints, bool isPlaced);

    Figure(const Figure& other);

    virtual ~Figure();

    std::string toString() const;

    Point* getPoints() const;
    bool getIsPlaced() const;

    void draw() const;

private:
    Point* points;
    int numberOfPoints;
    bool isPlaced;
};

#endif