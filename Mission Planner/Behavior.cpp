
#include "Behavior.h"

// template class for the moos behaviors extend for each available behavior option

    Behavior::Behavior(string name, bool deployFlag, bool returnFlag, int pwt)
    {
        Behavior::name = name;
        Behavior::deployFlag = deployFlag;
        Behavior::returnFlag = returnFlag;
        Behavior::pwt = pwt;
    }

    bool Behavior::getDeploy() const
    {
        return deployFlag;
    }

    void Behavior::setDeploy(bool deployFlag)
    {
        Behavior::deployFlag = deployFlag;
    }

    bool Behavior::getReturn() const
    {
        return returnFlag;
    }

    void Behavior::setReturn(bool returnFlag)
    {
        Behavior::returnFlag = returnFlag;
    }

    string Behavior::getName() const
    {
        return name;
    }

    void Behavior::setName(string name)
    {
        Behavior::name = name;
    }

    int Behavior::getPWT() const
    {
        return pwt;
    }

    void Behavior::setPWT(int pwt)
    {
        Behavior::pwt = pwt;
    }

    // TODO update this
    bool Behavior::operator==(Behavior & rhs)
    {
        return name == rhs.name;
    }
