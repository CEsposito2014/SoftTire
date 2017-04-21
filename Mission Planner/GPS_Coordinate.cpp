
#include "GPS_Coordinate.h"


GPS_Coordinate::GPS_Coordinate(int degree, int minute, int second, Cardinal direction)
    {
        GPS_Coordinate::degree = degree;
        GPS_Coordinate::minutes = minute;
        GPS_Coordinate::seconds = second;
        GPS_Coordinate::cardinalDirection = direction;
    }

GPS_Coordinate::GPS_Coordinate()
{
    GPS_Coordinate::degree = 0;
    GPS_Coordinate::minutes = 0;
    GPS_Coordinate::seconds = 0;
    GPS_Coordinate::cardinalDirection = Cardinal::NORTH;
}

    int GPS_Coordinate::getDegrees() const
    {
        return degree;
    }

    void GPS_Coordinate::setDegrees(int degree)
    {
        GPS_Coordinate::degree = degree;
    }

    int GPS_Coordinate::getMinutes() const
    {
        return minutes;
    }

    void GPS_Coordinate::setMinutes(int minute)
    {
        GPS_Coordinate::minutes = minute;
    }

    int GPS_Coordinate::getSeconds() const
    {
        return seconds;
    }

    void GPS_Coordinate::setSeconds(int second)
    {
        GPS_Coordinate::seconds = second;
    }

    Cardinal GPS_Coordinate::getDirection() const
    {
        return cardinalDirection;
    }

    void GPS_Coordinate::setDirection(Cardinal direction)
    {
        GPS_Coordinate::cardinalDirection = direction;
    }


    std::string GPS_Coordinate::toString() const
    {
        std::string cardinal = "";
        switch (cardinalDirection)
        {
        case Cardinal::NORTH:
            cardinal = "N";
            break;
        case Cardinal::EAST:
            cardinal = "E";
            break;
        case Cardinal::SOUTH:
            cardinal = "S";
            break;
        case Cardinal::WEST:
            cardinal = "W";
            break;
        }

        return std::to_string(degree) + " " + std::to_string(minutes) + " " + std::to_string(seconds) + " " + cardinal;
    }