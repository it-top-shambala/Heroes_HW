#pragma once
#include <string>
#include"../../Weapon/Bow.h"
#include "../abstraction/WeaponCreator.h"
using namespace std;
class BowCreator : public WeaponCreator
{
protected:
	BowCreator() {}
public:
	virtual Weapon weaponCreate() override
	{
		return new Bow;
	}
};