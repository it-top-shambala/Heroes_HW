#ifndef HEROES_ORC_H
#define HEROES_ORC_H

#include "Race.h"
#include "../Creator/c_race/OrcCreator.h"

using namespace std;

class Orc : public Race, public OrcCreator 
{
protected:
    int speed;
    int endurance;
public:
    Orc()
    {
        //TODO реализовать конструктор
    }
};

#endif //HEROES_ORC_H
