#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Orc : public Race{
    int HP = 120;
public:
    int GetHP() override{
        return HP;
    }
};



