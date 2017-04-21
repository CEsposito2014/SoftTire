#pragma once
#ifndef BEHAVIOR_H
#define BEHAVIOR_H
#pragma once

#include <string>
#include "Point.h"
using namespace std;

enum Order {NORMAL, REVERSE, TOGGLE};

// template class for moos behaviors exted for each behavior option available to moos
class Behavior
{
private:
    string name;
    int priority;
    int duration;
    bool duration_idle_decay;
    string durationRest;
    int duration_status;
    bool runFlag;
    bool inactiveFlag;
    bool idelFlag;
    bool activeFlag;
    bool endflag;
    bool deployFlag;
    bool returnFlag;
    string updates;
    string noStarve;
    bool perpetual;
    bool templates;
    int pwt;
public:
    Behavior(string name, bool deployFlag, bool returnFlag, int pwt);
    bool getDeploy() const;
    void setDeploy(bool deployFlag);
    bool getReturn() const;
    void setReturn(bool returnFlag);
    string getName() const;
    void setName(string name);
    int getPWT() const;
    void setPWT(int pwt);
    bool operator==(Behavior &rhs);
};

#endif BEHAVIOR_H
