#pragma once
#include "WeaponMod.h"
class ModLaserSight : public WeaponMod
{
public:
	ModLaserSight();
	ModLaserSight( shared_ptr<BaseWeapon> base );
	~ModLaserSight();

	string GetDescription() override;

	int CalculateDamage() override;
};

