#include "item.h"
#include <sstream>

Item::Item(eType _type, eRarity _rarity, int _maxDurability)
	:
	 type(_type)
	,rarity(_rarity)
	,durability(_maxDurability)
	,maxDurability(_maxDurability)
{}

void Item::Use()
{
	if (!IsBroken())
	{
		durability--;
	}
}

void Item::Repair()
{
	if (CanRepair())
	{
		maxDurability--;
		durability = maxDurability;
	}
}

std::string Item::ToString() const
{
	std::ostringstream oss;
	oss << "Type-"			<< (int)type << std::endl
		<< "Rarity:"		<< (int)rarity	   <<std::endl
	    << "durability-"	<< durability << std::endl
	    << "MaxDurability-" << maxDurability << std::endl;
	return oss.str();
}
