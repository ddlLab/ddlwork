#include "Chest.h"
#include <sstream>

eChest::eChest(eRarity _rarity, int _maxDurability, int _defense)
	  : Item(eType::CHEST, _rarity, _maxDurability)
	  , defense(_defense)
{}

std::string eChest::ToString() const
{
	std::ostringstream oss;
	oss << Item::ToString()
		<< "defense:" << defense << std::endl;
	return oss.str();
}
