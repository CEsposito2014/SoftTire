#include "MissionBuilder.h"
#include "MoosBhvBuilder.h"
#include "MoosFileBuilder.h"
#include "mainwindow.h"
#include <QApplication>
#include "MissionBuilder.h"

enum state{RUNNING, EXIT};

    MissionBuilder::MissionBuilder(string host, int port, GPS_Coordinate latitude, GPS_Coordinate longitude)
    {
        bhvBuilder = new MoosBhvBuilder();
        moosBuilder = new MoosFileBuilder(host, port, latitude, longitude);
        programState = programState::ACTIVE;
    }

    void MissionBuilder::buildMission()
    {
        moosBuilder->buildMoosFile();
        bhvBuilder->buildBhvFile();
    }

    int MissionBuilder::Init(int argc, char **argv)
    {
        // TODO QT gui interface here
        QApplication missionPlanner(argc, argv);
        MainWindow missionMain;
        missionMain.show();

        return missionPlanner.exec();

    }