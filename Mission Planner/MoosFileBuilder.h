#pragma once
#ifndef MOOSFILEBUILDER_H
#define MOOSFILEBUILDER_H

#include "GPS_Coordinate.h"
#include <string>
#include <vector>
#include "ConfigBlock.h"
using namespace std;

class MoosFileBuilder
{
private:
    string serverHost;
    int serverPort;
    GPS_Coordinate latOrigin;
    GPS_Coordinate longOrigin;
    vector<ConfigBlock> configurationBlocks;
public:
    MoosFileBuilder(string host, int port, GPS_Coordinate latitude, GPS_Coordinate longitude);
    string getServerHost() const;
    void setServerHost(string host);
    int getServerPort() const;
    void setServerPort(int port);
    GPS_Coordinate getLatOrigin() const;
    void setLatOrigin(GPS_Coordinate latitude);
    GPS_Coordinate getLongOrigin() const;
    void setLongOrigin(GPS_Coordinate longitude);
    vector<ConfigBlock> getConfigurationBlocks() const;
    void setConfigurationBlocks(vector<ConfigBlock> configVector);
    void buildMoosFile();
};

#endif // !MOOSFILEBUILDER_H
