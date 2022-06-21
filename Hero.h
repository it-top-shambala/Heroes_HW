#ifndef HEROES_HERO_H
#define HEROES_HERO_H

#include <string>

#include "Weapon.h"

using namespace std;

class Hero {
protected:
    int _health;
    string _name;

    Weapon* weapon;

    Hero(const string &name) : _name(name) {}

public:
    const string& GetName() const {
        return _name;
    }

    void SetHealth(int health) {
        if (health <= 0) {
            _health = 0;
        } else {
            _health = health;
        }

        // _health = health <= 0 ? 0 : health;
    }
    int GetHealth() {
        return _health;
    }

    bool IsDeath() {
        return _health == 0;
    }
};

#endif //HEROES_HERO_H
