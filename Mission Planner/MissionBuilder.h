#pragma once
#ifndef  MISSIONBUILDER_H
#define MISSIONBUILDER_H
#pragma once

#include "MoosBhvBuilder.h"
#include "MoosFileBuilder.h"

enum programState { ACTIVE, QUIT };

class MissionBuilder
{
private:
    MoosBhvBuilder *bhvBuilder;
    MoosFileBuilder *moosBuilder;
    programState programState;
public:
    MissionBuilder(string host, int port, GPS_Coordinate latitude, GPS_Coordinate longitude);
    void buildMission();
    int Init(int argc, char** argv);
};

#endif // ! MISSIONBUILDER_H
