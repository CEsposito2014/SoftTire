#include "Waypoint.h"

Waypoint::Waypoint(GPS_Coordinate latitude, GPS_Coordinate Longitude)
{
    targetLatitude = latitude;
    targeLongitude = Longitude;
}

GPS_Coordinate Waypoint::getLatitude() const
{
    return targetLatitude;
}

GPS_Coordinate Waypoint::getLongitude() const
{
    return targeLongitude;
}

void Waypoint::setLatitude(GPS_Coordinate latitude)
{
    targetLatitude = latitude;
}

void Waypoint::setLongitude(GPS_Coordinate longitude)
{
    targeLongitude = longitude;
}

std::string Waypoint::toString() const
{
    return targetLatitude.toString() + targeLongitude.toString();
}