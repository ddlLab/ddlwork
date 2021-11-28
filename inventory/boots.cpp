#include "Boots.h"
#include <sstream>

eBoots::eBoots(eRarity _rarity, int _maxDurability, int _defense)
	: Item(eType::BOOTS, _rarity, _maxDurability)
	, defense(_defense)
{}

std::string eBoots::ToString() const
{
	std::ostringstream oss;
	oss << Item::ToString()
		<< "defense:" << defense << std::endl;
	return oss.str();
}
