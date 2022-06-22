#pragma once
#include <string>
#include "Hero/Hero.h"
using namespace std;

class Config
{
protected:
	Config(){}
public:	
	virtual Hero* createHero(Choice choice) = 0;
	virtual Race setRace(Choice choice) = 0;
	virtual Weapon setWeapone(Choice choice) = 0;
	
};