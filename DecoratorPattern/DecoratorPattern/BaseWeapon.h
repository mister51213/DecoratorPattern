#pragma once
#include <string>

using namespace std;

class BaseWeapon
{
public:
	BaseWeapon() = default;
	~BaseWeapon() = default;

	string GetDescription()
	{
		return description;
	}

	virtual int CalculateDamage() = 0;

protected:
	string description;
	int damage;
};