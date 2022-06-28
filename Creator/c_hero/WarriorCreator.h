#pragma once
#include "../../Hero/Warrior.h"
#include <string>
using namespace std;

class WarriorCreator : public HeroesCreator
{
protected:
	WarriorCreator() {}
public:
	virtual Hero* createHero() override
	{
		return new Warrior;
	}

};