#pragma once
#include <string>

using namespace std;
class Choice 
{
protected:
	string name;
	string hero;
	string race;
	string weapon;
public:
	Choice()
	{
		//TODO ���� ������ ������ ������ Choice ����
	}
	string getHero()
	{
		return hero;
	}
	string getRace()
	{
		return race;
	}
	string getWeapon()
	{
		return weapon;
	}
	
};