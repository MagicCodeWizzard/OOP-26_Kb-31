#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point
{
public:
    Point();
    Point(double x, double y);

    Point(const Point& other);

    std::string toString() const;
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;

    void draw() const;

private:
    double x;
    double y;
};


#endif