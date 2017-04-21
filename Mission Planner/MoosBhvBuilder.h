#pragma once
#ifndef MOOSBHVBUILDER_H
#define MOOSBHVBUILDER_H

#include "Behavior.h"
#include <vector>
#include <map>

using namespace std;

class MoosBhvBuilder
{
private:
    std::vector<Behavior> *behaviors;

    //::map<BehaviorList, const char*>bhvmap = (BehaviorList::WAYPOINT, "Waypoint");
    
public:
    MoosBhvBuilder();
    void buildBhvFile();
    void addBehavior(Behavior bhv);
    void removeBehavior(int index);
    void removeBehavior(Behavior *bhv);
    void createBhv(); 
};


#endif // !MOOSBHVBUILDER_H
