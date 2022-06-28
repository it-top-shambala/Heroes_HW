#ifndef HEROES_HUMAN_H
#define HEROES_HUMAN_H

#include "Race.h"
#include "../Creator/c_race/HumanCreator.h"

using namespace std;

class Human : public Race, public HumanCreator
{
protected:
    int speed;
    int endurance;
public:
    Human() {
        //TODO реализовать конструктор
    }
};

#endif //HEROES_HUMAN_H
