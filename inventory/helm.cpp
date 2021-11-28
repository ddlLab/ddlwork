#include "helm.h"
#include <sstream>

eHelm::eHelm(eRarity _rarity, int _maxDurability, int _defense)
: Item(eType::HELM, _rarity, _maxDurability)
, defense(_defense)
{}

std::string eHelm::ToString() const
{
	std::ostringstream oss;
	oss << Item::ToString()
		<< "defense:" << defense << std::endl;
	return oss.str();
}
