#pragma once
#include <memory>
#include "BaseWeapon.h"

using namespace std;

class WeaponMod : public BaseWeapon
{
public:
	WeaponMod() = default;

	WeaponMod( shared_ptr<BaseWeapon> base )
	{
		pBase = base;
	}

	~WeaponMod() = default;

	virtual int CalculateDamage() = 0;

	shared_ptr<BaseWeapon> pBase;
};


