#ifndef HEROES_ARCHER_H
#define HEROES_ARCHER_H
#include "Specialization.h"

using namespace std;

class Archer : public Specialization {
private:
    int Damage = 75;
public:
    int GetDamage() override
    {return Damage;}
};


#endif //HEROES_ARCHER_H
