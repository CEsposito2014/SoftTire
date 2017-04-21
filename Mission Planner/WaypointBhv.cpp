#include "WaypointBhv.h"

    WaypointBhv::WaypointBhv(string name, bool deployFlag, bool returnFlag, int pwt) : Behavior(name, deployFlag, returnFlag, pwt)
    {
        //TODO add default Values;
        capture_radius = 5;
        cycle_flag = false;
        traverse_order = "normal";
        points = vector<Waypoint>();
        repeat = false;
        slip_radius = 5;
        speed = 2;
        WaypointBhv::wapoint_template = createWaypointBlock();
    }

    //getters
    int WaypointBhv::getCapture_radius()
    {
        return capture_radius;
    }
   /* int WaypointBhv::getCapture_line()
    {
        return capture_line;
    }
    int WaypointBhv::getCrs_spd_ziac_ratio()
    {
        return crs_spd_ziac_ratio;
    }*/
    bool WaypointBhv::getCycle_flag()
    {
        return cycle_flag;
    }/*
    bool WaypointBhv::getEfficiency_measure()
    {
        return efficiency_measure;
    }
    bool WaypointBhv::getLead()
    {
        return lead;
    }
    int WaypointBhv::getLead_damper()
    {
        return lead_damper;
    }
    bool WaypointBhv::getLead_to_start()
    {
        return lead_to_start;
    }*/
    std::string WaypointBhv::getTraverse_order()
    {
        return traverse_order;
    }
    vector<Waypoint> WaypointBhv::getPoints()
    {
        return points;
    }
    /*string WaypointBhv::getPost_suffix()
    {
        return post_suffix;
    }*/
    bool WaypointBhv::getRepeat()
    {
        return repeat;
    }
    int WaypointBhv::getSlip_radius()
    {
        return slip_radius;
    }
    double WaypointBhv::getSpeed()
    {
        return speed;
    }
   /* double WaypointBhv::getAlt_speed()
    {
        return alt_speed;
    }*/
    string WaypointBhv::getWapoint_template()
    {
        return wapoint_template;
    }
    //setters
    void WaypointBhv::setCapture_radius(int capture_radius)
    {
        WaypointBhv::capture_radius = capture_radius;
    }
    /*void WaypointBhv::setCapture_line(int capture_line)
    {
        WaypointBhv::capture_line = capture_line;
    }
    void WaypointBhv::setCrs_spd_ziac_ratio(int crs_spd_ziac_ratio)
    {
        WaypointBhv::crs_spd_ziac_ratio = crs_spd_ziac_ratio;
    }
    void WaypointBhv::setCycle_flag(bool cycle_flag)
    {
        WaypointBhv::cycle_flag = cycle_flag;
    }
    void WaypointBhv::setEfficiency_measure(bool efficiency_measure)
    {
        WaypointBhv::efficiency_measure = efficiency_measure;
    }
    void WaypointBhv::setLead(bool lead)
    {
        WaypointBhv::lead = lead;
    }
    void WaypointBhv::setLead_damper(int lead_damper)
    {
        WaypointBhv::lead_damper = lead_damper;
    }
    void WaypointBhv::setLead_to_start(bool lead_to_start)
    {
        WaypointBhv::lead_to_start = lead_to_start;
    }*/
    void WaypointBhv::setTraverse_order(Order traverse_order)
    {
        WaypointBhv::traverse_order = traverse_order;
    }
    //void WaypointBhv::setPost_suffix(string post_suffix)
    //{
    //    WaypointBhv::post_suffix = post_suffix;
    //}
    void WaypointBhv::setRepeat(bool repeat)
    {
        WaypointBhv::repeat = repeat;
    }
    void WaypointBhv::setSlip_radius(int slip_radius)
    {
        WaypointBhv::slip_radius = slip_radius;
    }
    void WaypointBhv::setSpeed(double speed)
    {
        WaypointBhv::speed = speed;
    }
    //void WaypointBhv::setAlt_speed(double alt_speed)
    //{
    //    WaypointBhv::alt_speed = alt_speed;
    //}

    void WaypointBhv::addPoint(Waypoint pt)
    {
        points.push_back(pt);
    }

    string WaypointBhv::createWaypointBlock()
    {
        std::string polygon = "";

        for (Waypoint point : points)
        {
            polygon = polygon + point.toString();
        }

        return "Behavior = BHV_Waypoint \n"
            "{ \n"
            "name = " + WaypointBhv::getName() + " \n pwt = " + to_string(WaypointBhv::getPWT()) +
            "\ncondition = RETURN ="
            "\ncondition = DEPLOY ="
            "\nendflag = RETURN ="

            "\nidleflag = WPTING ="
            "\nrunflag = WPTING ="
            "\nendflag = WPTING ="
            "\ninactiveflag = WPTING ="

            "\nupdates ="
            "\nperpetual ="
            "\ntemplating ="
            "\nlead ="
            "\nlead_damper ="
            "\nlead_to_start ="
            "\nspeed ="
            "\ncapture_line ="
            "\ncapture_radius ="
            "\nslip_radius ="
            "\nefficiency_measure ="

            "\npolygon = " + polygon +
            "\nrepeat ="
            "\n}";
    }

