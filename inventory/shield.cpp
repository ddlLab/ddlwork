#include "Shield.h"
#include <sstream>

eShield::eShield(eRarity _rarity, int _maxDurability, int _protection)
	: Item(eType::SHIELD, _rarity, _maxDurability)
	, protection(_protection)
{}

std::string eShield::ToString() const
{
	std::ostringstream oss;
	oss << Item::ToString()
		<< "protection:" << protection << std::endl;
	return oss.str();
}
