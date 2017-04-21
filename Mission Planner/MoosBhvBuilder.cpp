
#include "MoosBhvBuilder.h"
#include "Behavior.h"
#include <vector>
using namespace std;



    MoosBhvBuilder::MoosBhvBuilder()
    {

    }

    void MoosBhvBuilder::addBehavior(Behavior bhv)
    {
        // add a behavior to the mission behavior queue
        behaviors->push_back(bhv);
    }

    void MoosBhvBuilder::removeBehavior(int index)
    {
        // remove by index
        // TODO check this to make sure position is accurate
        behaviors->erase(behaviors->begin() + index);
    }

    void MoosBhvBuilder::removeBehavior(Behavior *bhv)
    {
        // remove by element
        for (unsigned int i = 0; i < behaviors->size(); i++)
        {
            if (behaviors->at(i) == *bhv)
            {
                behaviors->erase(behaviors->begin() + i);
            }
        }
    }

    void MoosBhvBuilder::createBhv()
    {
        // TODO create new behaviors here
    }

    void MoosBhvBuilder::buildBhvFile()
    {
        //TODO write .bhv file here
    }
