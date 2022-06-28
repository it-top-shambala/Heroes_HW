#ifndef HEROES_WARRIOR_H
#define HEROES_WARRIOR_H
#include "Specialization.h"
using namespace std;

class Warrior : public Specialization {
private:
int Damage = 15;
public:
int GetDamage() override
{return Damage;}
};

#endif //HEROES_WARRIOR_H
