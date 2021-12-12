#include "boots.h"
#include <sstream>

eBoots::eBoots(eRarity _rarity, int _maxDurability, int _speed)
	: eItem(eType::BOOTS, _rarity, _maxDurability)
	, speed(_speed)
{}

std::string eBoots::ToString() const
{
	std::ostringstream oss;
	oss << eItem::ToString()
		<< "Speed:" << speed << std::endl;
	return oss.str();

}
