#pragma once
#include <string>
#include "HeroesCreator.h"
#include "../../Hero/Archer.h"
using namespace std;

class ArcherCreator : public HeroesCreator
{
protected:
	ArcherCreator(){}
public:
	virtual Hero* createHero() override
	{		
		return new Archer;
	}

};
