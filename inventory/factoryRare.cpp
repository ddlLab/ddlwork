#pragma once
#include "factoryRare.h"
#include "abstract_factory.h"

iItem* FactoryRare::MakeBoots()
{
	return new eBoots(iItem::eRarity::RARE, rand() % 20 + 15, rand() % 10);
}

iItem* FactoryRare::MakeShield()
{
	return new eShield(iItem::eRarity::RARE, rand() % 50 + 15, rand() % 20);
}

iItem* FactoryRare::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::RARE, rand() % 60 + 25, rand() % 20);
}

iItem* FactoryRare::MakeChest()
{
	return new eChest(iItem::eRarity::RARE, rand() % 80 + 30, rand() % 25);
}

iItem* FactoryRare::MakeHelm()
{
	return new eHelm(iItem::eRarity::RARE, rand() % 40 + 25, rand() % 20);
}

iItem* FactoryRare::Make(iItem::eType type)
{
	switch (type)
	{
		case iItem::eType::BOOTS:   return MakeBoots();
		case iItem::eType::CHEST:   return MakeChest();
		case iItem::eType::HELM:    return MakeHelm();
		case iItem::eType::SHIELD:  return MakeShield();
		case iItem::eType::WEAPON:  return MakeWeapon();
		default:;
	}
	return nullptr;
}

iItem* FactoryRare::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType) val);
}
