#pragma once
#include <string>
#include"../../Weapon/Axe.h"
#include "../abstraction/WeaponCreator.h"
using namespace std;
class AxeCreator : public WeaponCreator
{
protected:
	AxeCreator(){}
public:
	virtual Weapon weaponCreate() override
	{
		return new Axe;
	}
};