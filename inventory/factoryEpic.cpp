#pragma once
#include "factoryEpic.h"
#include "abstract_factory.h"

iItem* FactoryEpic::MakeBoots()
{
	return new eBoots(iItem::eRarity::EPIC, rand() % 30 + 20, rand() % 15);
}

iItem* FactoryEpic::MakeShield()
{
	return new eShield(iItem::eRarity::EPIC, rand() % 60 + 20, rand() % 25);
}

iItem* FactoryEpic::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::EPIC, rand() % 70 + 30, rand() % 25);
}

iItem* FactoryEpic::MakeChest()
{
	return new eChest(iItem::eRarity::EPIC, rand() % 90 + 35, rand() % 30);
}

iItem* FactoryEpic::MakeHelm()
{
	return new eHelm(iItem::eRarity::EPIC, rand() % 50 + 30, rand() % 35);
}

iItem* FactoryEpic::Make(iItem::eType type)
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

iItem* FactoryEpic::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType) val);
}
