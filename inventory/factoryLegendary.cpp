#pragma once
#include "factoryLegendary.h"
#include "abstract_factory.h"

iItem* FactoryLegendary::MakeBoots()
{
	return new eBoots(iItem::eRarity::LEGENDARY, rand() % 40 + 25, rand() % 20);
}

iItem* FactoryLegendary::MakeShield()
{
	return new eShield(iItem::eRarity::LEGENDARY, rand() % 70 + 25, rand() % 30);
}

iItem* FactoryLegendary::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::LEGENDARY, rand() % 80 + 35, rand() % 30);
}

iItem* FactoryLegendary::MakeChest()
{
	return new eChest(iItem::eRarity::LEGENDARY, rand() % 100 + 40, rand() % 35);
}

iItem* FactoryLegendary::MakeHelm()
{
	return new eHelm(iItem::eRarity::LEGENDARY, rand() % 60 + 35, rand() % 40);
}

iItem* FactoryLegendary::Make(iItem::eType type)
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

iItem* FactoryLegendary::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType) val);
}
