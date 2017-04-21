#pragma once
#ifndef WAYPOINTBHV_H
#define WAYPOINTBHV_H

#include "Behavior.h"
#include "GPS_Coordinate.h"
#include <vector>
#include "Waypoint.h"

class WaypointBhv : public Behavior
{
private:
    int capture_radius;
    //int capture_line;
    //int crs_spd_ziac_ratio;
    bool cycle_flag;
    //bool efficiency_measure;
    //bool lead;
    //int lead_damper;
    //bool lead_to_start;
    std::string traverse_order;
    vector<Waypoint> points;
    //string post_suffix;
    bool repeat;
    int slip_radius;
    double speed;
    //double alt_speed;
    string wapoint_template;

public:
    WaypointBhv(string name, bool deployFlag, bool returnFlag, int pwt);
    //getters
    int getCapture_radius();
    //int getCapture_line();
    //int getCrs_spd_ziac_ratio();
    bool getCycle_flag();
    /*bool getEfficiency_measure();
    bool getLead();
    int getLead_damper();
    bool getLead_to_start();*/
    std::string getTraverse_order();
    vector<Waypoint> getPoints();
    //string getPost_suffix();
    bool getRepeat();
    int getSlip_radius();
    double getSpeed();
    //double getAlt_speed();
    string getWapoint_template();
    //setters
    void setCapture_radius(int capture_radius);
    /*void setCapture_line(int capture_line);
    void setCrs_spd_ziac_ratio(int crs_spd_ziac_ratio);
    void setCycle_flag(bool cycle_flag);
    void setEfficiency_measure(bool efficiency_measure);
    void setLead(bool lead);
    void setLead_damper(int lead_damper);
    void setLead_to_start(bool lead_to_start);*/
    void setTraverse_order(Order traverse_order);
    //void setPost_suffix(string post_suffix);
    void setRepeat(bool repeat);
    void setSlip_radius(int slip_radius);
    void setSpeed(double speed);
    //void setAlt_speed(double alt_speed);
    // create the waypoint script block and add points to the vector
    string createWaypointBlock();
    void addPoint( Waypoint pt);


};

#endif // !
