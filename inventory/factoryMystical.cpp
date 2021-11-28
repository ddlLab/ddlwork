#pragma once
#include "factoryMystical.h"
#include "abstract_factory.h"

iItem* FactoryMystical::MakeBoots()
{
	return new eBoots(iItem::eRarity::MYSTICAL, rand() % 50 + 30, rand() % 25);
}

iItem* FactoryMystical::MakeShield()
{
	return new eShield(iItem::eRarity::MYSTICAL, rand() % 80 + 30, rand() % 35);
}

iItem* FactoryMystical::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::MYSTICAL, rand() % 90 + 40, rand() % 35);
}

iItem* FactoryMystical::MakeChest()
{
	return new eChest(iItem::eRarity::MYSTICAL, rand() % 110 + 45, rand() % 40);
}

iItem* FactoryMystical::MakeHelm()
{
	return new eHelm(iItem::eRarity::MYSTICAL, rand() % 70 + 40, rand() % 45);
}

iItem* FactoryMystical::Make(iItem::eType type)
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

iItem* FactoryMystical::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType) val);
}
