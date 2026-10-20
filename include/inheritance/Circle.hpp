#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Figure.hpp"

class Circle : public Figure
{
public:
    Circle(Point center, double radius);

    Circle(const Circle& other);

    ~Circle() override = default;

    std::string toString() const;

    void draw() const;

private:
    Point center;
    double radius;
};

#endif