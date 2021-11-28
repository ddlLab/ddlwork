#include "Weapon.h"
#include <sstream>

eWeapon::eWeapon(eRarity _rarity, int _maxDurability, int _damage)
	: Item(eType::WEAPON, _rarity, _maxDurability)
	, damage(_damage)
{}

std::string eWeapon::ToString() const
{
	std::ostringstream oss;
	oss << Item::ToString()
		<< "damaga:" << damage << std::endl;
	return oss.str();
}
