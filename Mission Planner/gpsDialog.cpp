#include "gpsDialog.h"


gpsDialog::gpsDialog(WaypointBhv *bhv, QWidget *parent)
{
    behavior = bhv;
    gpsAdd->setupUi(this);
}

gpsDialog::~gpsDialog()
{
    delete gpsAdd;
}

void gpsDialog::on_okBtn_Clicked()
{
    int latDegree = gpsAdd->latDegreeText->text().toInt();
    int latMinute = gpsAdd->latMinuteText->text().toInt();
    int latSecond = gpsAdd->latSecondText->text().toInt();
    Cardinal latCardinal = (Cardinal)gpsAdd->latCardinalBox->currentData().toInt();

    GPS_Coordinate latitude = GPS_Coordinate(latDegree, latMinute, latSecond, latCardinal);

    int longDegree = gpsAdd->longDegreeText->text().toInt();
    int longMinute = gpsAdd->longMinuteText->text().toInt();
    int longSecond = gpsAdd->longSecondText->text().toInt();
    Cardinal longCardinal = (Cardinal)gpsAdd->longCardinalBox->currentData().toInt();

    GPS_Coordinate longitude = GPS_Coordinate(longDegree, longMinute, longSecond, longCardinal);

    behavior->addPoint(Waypoint(latitude, longitude));

     this->done(0);
}

void gpsDialog::on_cancelBtn_Clicked()
{
    this->done(0);
}