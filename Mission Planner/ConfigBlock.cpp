

#include "ConfigBlock.h"

ConfigBlock::ConfigBlock(const string &process, int appTick, int commTick)
    {
        ConfigBlock::process = process;
        ConfigBlock::appTick = appTick;
        ConfigBlock::commTick = commTick;
    }

    string ConfigBlock::getProcess() const
    {
        return process;
    }

    void ConfigBlock::setProcess(const string process)
    {
        ConfigBlock::process = process;
    }

    int ConfigBlock::getAppTick() const
    {
        return appTick;
    }

    void ConfigBlock::setAppTick(int appTick)
    {
        ConfigBlock::appTick = appTick;
    }

    int ConfigBlock::getCommTick() const
    {
        return commTick;
    }

    void ConfigBlock::setCommTick(int commTick)
    {
        ConfigBlock::commTick = commTick;
    }
