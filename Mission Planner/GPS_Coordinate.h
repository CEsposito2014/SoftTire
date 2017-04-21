#pragma once
#ifndef GPS_COORDINATE_H
#define GPS_COORDINATE_H
#include <string>

enum Cardinal { NORTH, EAST, SOUTH, WEST };

class GPS_Coordinate
{
private:
    int degree;
    int minutes;
    int seconds;

    Cardinal cardinalDirection;
public:
    GPS_Coordinate(int degree, int minute, int second, Cardinal direction);
    GPS_Coordinate();
    int getDegrees() const;
    int getMinutes() const;
    int getSeconds() const;
    Cardinal getDirection() const;

    void setDegrees(int degree);
    void setMinutes(int minute);
    void setSeconds(int second);
    void setDirection(Cardinal direction);
    std::string toString() const;
};


#endif