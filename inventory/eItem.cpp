#include <sstream>
#include "eItem.h"

eItem::eItem(eType _type, eRarity _rarity, int _maxDurability)
: type(_type)
, rarity(_rarity)
, durability(_maxDurability)
, maxDurability(_maxDurability)
{}

void eItem::Use()
{
    if (!IsBroken())
    {
        durability--;
    }
}

void eItem::Repair()
{
    if (CanRepair())
    {
        maxDurability--;
        durability = maxDurability;
    }
}

string eItem::ToString() const
{
    ostringstream oss;
    oss << "Type:"            << (int)type     << endl
        << "Rarity: "         << (int)rarity   << endl
        << "Durability: "     << durability    << endl
        << "Max Durability: " << maxDurability << endl;
    return oss.str();
}
