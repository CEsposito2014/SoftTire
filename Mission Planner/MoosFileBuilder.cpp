
#include "MoosFileBuilder.h"

    MoosFileBuilder::MoosFileBuilder(string host, int port, GPS_Coordinate latitude, GPS_Coordinate longitude)
    {
        MoosFileBuilder::serverHost = host;
        MoosFileBuilder::serverPort = port;
        MoosFileBuilder::latOrigin = latitude;
        MoosFileBuilder::longOrigin = longitude;
    }
    
    string MoosFileBuilder::getServerHost() const
    {
        return serverHost;
    }

    void MoosFileBuilder::setServerHost(string host)
    {
        MoosFileBuilder::serverHost = host;
    }

    int MoosFileBuilder::getServerPort() const
    {
        return serverPort;
    }

    void MoosFileBuilder::setServerPort(int port)
    {
        MoosFileBuilder::serverPort = port;
    }

    GPS_Coordinate MoosFileBuilder::getLatOrigin() const
    {
        return latOrigin;
    }

    void MoosFileBuilder::setLatOrigin(GPS_Coordinate latitude)
    {
        latOrigin = latitude;
    }

    GPS_Coordinate MoosFileBuilder::getLongOrigin() const
    {
        return longOrigin;
    }

    void MoosFileBuilder::setLongOrigin(GPS_Coordinate longitude)
    {
        MoosFileBuilder::longOrigin = longitude;
    }

    vector<ConfigBlock> MoosFileBuilder::getConfigurationBlocks() const
    {
        return configurationBlocks;
    }

    void MoosFileBuilder::setConfigurationBlocks(vector<ConfigBlock> configurationBlocks)
    {
        MoosFileBuilder::configurationBlocks = configurationBlocks;
    }
    // build the .moos file from the selected configuration blocks and write to file
    void MoosFileBuilder::buildMoosFile()
    {
        //TODO
    }
    

