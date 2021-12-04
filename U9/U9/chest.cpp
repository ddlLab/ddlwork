#include "chest.h"
#include <sstream>

eChest::eChest(eRarity _rarity, int _maxDurability, int _defense)
	: eItem(eType::CHEST, _rarity, _maxDurability)
	, defense(_defense)
{}

std::string eChest::ToString() const
{
	std::ostringstream oss;
	oss << eItem::ToString()
		<< "Defense:" << defense << std::endl;
	return oss.str();
}
