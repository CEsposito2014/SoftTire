#include "Point.h"


    Point::Point(double x, double y)
    {
        Point::x = x;
        Point::y = y;
    }

    double Point::getX() const
    {
        return x;
    }

    void Point::setX(double x)
    {
        Point::x = x;
    }

    double Point::getY() const
    {
        return y;
    }

    void Point::setY(double y)
    {
        Point::y = y;
    }

    bool Point::operator==(const Point & rhs) const
    {
        if (x == rhs.x && y == rhs.y)
            return true;
        else
            return false;
    }