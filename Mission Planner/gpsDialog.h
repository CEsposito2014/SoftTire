#pragma once
#ifndef GPSDIALOG_H
#define GPSDIALOG_H

#include "ui_GPS_add.h"
#include "GPS_Coordinate.h"
#include "Waypoint.h"
#include "WaypointBhv.h"

class gpsDialog :public QDialog
{
    Q_OBJECT;

public:
    gpsDialog(WaypointBhv *bhv, QWidget *parent = 0);
    ~gpsDialog();

private:
    Ui::GPS_add *gpsAdd;
    WaypointBhv *behavior;

public slots:
    void on_okBtn_Clicked();
    void on_cancelBtn_Clicked();
};


#endif