#pragma once
#ifndef BEHAVIORLIST_H
#define BEHAVIORLIST_H
#include <vector>
#include <string>

class BehaviorList
{
public:
    const std::vector<std::string> BehaviorNames = {
        "WAYPOINT",
        "OP REGION",
        "LOITER",
        "PERIODIC SPEED",
        "PERIODIC SURFACE",
        "CONSTANT DEPTH",
        "CONSTANT HEADING",
        "CONSTANT SPEED",
        "MAX DEPTH",
        "GO TO DEPTH",
        "MEM TURN LIMIT",
        "SATION KEEP",
        "TIMER",
        "TEST FAILURE",
        "AVOID COLLISION",
        "CUT RANGE",
        "SHADOW",
        "TRAIL"
    };

    const size_t BehaviorList::getLength() const
    {
        return BehaviorNames.size();
    }

    const std::string BehaviorList::getName(int index) const
    {
        return BehaviorNames.at(index);
    }
};
#endif
