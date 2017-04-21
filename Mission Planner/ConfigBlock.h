#pragma once

#ifndef CONFIGBLOCK_H
#define CONFIGBLOCK_H

#include <string>
using namespace std;

class ConfigBlock
{
private:
    string process;
    int appTick;
    int commTick;
public:
    ConfigBlock(const string &process, int appTick, int commTick);
    string getProcess() const;
    void setProcess(string process);
    int getAppTick() const;
    void setAppTick(int appTick);
    int getCommTick() const;
    void setCommTick(int commTick);
};

#endif
