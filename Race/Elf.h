#ifndef HEROES_ELF_H
#define HEROES_ELF_H
#include <iostream>
#include "Race.h"

using namespace std;

class Elf : public Race{
        int HP = 100;
    public:
        int GetHP() override{
            return HP;
        }
    };



#endif //HEROES_ELF_H
