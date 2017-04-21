#include "WaypointForm.h"

WaypointForm::WaypointForm(QWidget *parent)
{
    waypointDialog->setupUi(this);

}

WaypointForm::~WaypointForm()
{
    delete waypointDialog;
}

void WaypointForm::on_addBtn_Clicked()
{
    gpsDialog *gps = new gpsDialog(behavior, this);
    gps->setModal(true);
    gps->exec();
}

void WaypointForm::on_okBtn_Clicked()
{
    this->done(0);
}

void WaypointForm::on_cancelBtn_Clicked()
{
    this->done(0);
}

void WaypointForm::setBhv(WaypointBhv *bhv)
{
    behavior = bhv;
}
