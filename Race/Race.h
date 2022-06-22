#ifndef HEROES_RACE_H
#define HEROES_RACE_H
#include <string>
#include "Choice/Choice.h"
using namespace std;

class Race: public Choice
{
protected:
    int speed;
    int endurance;
public:
    Race()
    {
            //TODO реализовать конструктор
    }
};

#endif //HEROES_RACE_H