#include "ModLaserSight.h"

ModLaserSight::ModLaserSight()
{}

ModLaserSight::ModLaserSight(shared_ptr<BaseWeapon> base)
	:
	WeaponMod(base)
{}

ModLaserSight::~ModLaserSight()
{}

string ModLaserSight::GetDescription()
{
	return description + ", Laser Sight";
}

int ModLaserSight::CalculateDamage()
{
	return pBase->CalculateDamage() + 2;
}
