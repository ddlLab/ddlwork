#include "shield.h"
#include <sstream>

eShield::eShield(eRarity _rarity, int _maxDurability, int _damageResist)
	: eItem(eType::SHIELD, _rarity, _maxDurability)
	, damageResist(_damageResist)
{}

std::string eShield::ToString() const
{
	std::ostringstream oss;
	oss << eItem::ToString()
		<< "Damage Resistance:" << damageResist << std::endl;
	return oss.str();
}
