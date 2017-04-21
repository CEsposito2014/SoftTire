#pragma once
#include "GPS_Coordinate.h"
#include <string>

class Waypoint
{
public:
    Waypoint(GPS_Coordinate latitude, GPS_Coordinate longitude);

    GPS_Coordinate getLatitude() const;
    GPS_Coordinate getLongitude() const;
    void setLatitude(GPS_Coordinate latitude);
    void setLongitude(GPS_Coordinate longitude);
    std::string toString() const;

private:
    GPS_Coordinate targetLatitude;
    GPS_Coordinate targeLongitude;
};