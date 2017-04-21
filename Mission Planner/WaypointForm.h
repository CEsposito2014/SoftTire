#pragma once
#ifndef WAYPOINTFORM_H
#define WAYPOINTFORM_H

#include "ui_waypointForm.h"
#include "WaypointBhv.h"
#include "gpsDialog.h"


class WaypointForm : public QDialog
{
    Q_OBJECT;
public:
    WaypointForm(QWidget *parent = 0);
    ~WaypointForm();
    void setBhv(WaypointBhv *bhv);

private:
    Ui::WaypointDialog *waypointDialog;
    WaypointBhv *behavior = NULL;

public slots:
    void on_addBtn_Clicked();
    void on_okBtn_Clicked();
    void on_cancelBtn_Clicked();
};

#endif