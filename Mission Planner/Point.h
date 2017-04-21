#pragma once
#ifndef  POINT_H
#define POINT_H
#pragma once

class Point
{
private:
    double x;
    double y;
public:
    Point(double x, double y);
    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);

    bool Point::operator== (const Point &rhs) const;

};

#endif // ! POINT_H
