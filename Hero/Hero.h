#ifndef HEROES_HERO_H
#define HEROES_HERO_H

#include <string>

#include "../Weapon/Weapon.h"
#include "../Race/Race.h"
#include "../Choice/Choice.h"
#include "../Config.h"

using namespace std;

class Hero {
protected:
    int _health;
    Choice choice;
    Weapon weapon;
    Race rase;   

    Hero()
    {

    }

public:    
    void create() 
    {
        Choice choice;
        Config* config;
        config->createHero(choice);
        config->setRace(choice);
        config->setWeapone(choice);
    }
    void setHealth(int health) {
        if (health <= 0) {
            _health = 0;
        } else {
            _health = health;
        }

        // _health = health <= 0 ? 0 : health;
    }
    int getHealth() {
        return _health;
    }

    bool isDeath() {
        return _health == 0;
    }
};

#endif //HEROES_HERO_H
