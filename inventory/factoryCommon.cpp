#pragma once
#include "factoryCommon.h"
#include "abstract_factory.h"

iItem* FactoryCommon::MakeBoots()
{
	return new eBoots(iItem::eRarity::COMMON, rand() % 30 + 10, rand() % 5);
}

iItem* FactoryCommon::MakeShield()
{
	return new eShield(iItem::eRarity::COMMON, rand() % 40 + 10, rand() % 15);
}

iItem* FactoryCommon::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::COMMON, rand() % 50 + 20, rand() % 15);
}

iItem* FactoryCommon::MakeChest()
{
	return new eChest(iItem::eRarity::COMMON, rand() % 70 + 25, rand() % 20);
}

iItem* FactoryCommon::MakeHelm()
{
	return new eHelm(iItem::eRarity::COMMON, rand() % 30 + 20, rand() % 15);
}

iItem* FactoryCommon::Make(iItem::eType type)
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

iItem* FactoryCommon::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType) val);
}
