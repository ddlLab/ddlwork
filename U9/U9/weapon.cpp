#include "weapon.h"
#include <sstream>

eWeapon::eWeapon(eRarity _rarity, int _maxDurability, int _damage)
	: eItem(eType::WEAPON, _rarity, _maxDurability)
	, damage(_damage)
{}

std::string eWeapon::ToString() const
{
	std::ostringstream oss;
	oss << eItem::ToString()
		<< "Damage:" << damage << std::endl;
	return oss.str();
}
