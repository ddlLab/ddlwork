#include "factory_mythical.h"
#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryMythical::MakeBoots()
{
	return new eBoots(iItem::eRarity::MYTHICAL, rand() % 80 + 10, rand() % 80);
}

iItem* FactoryMythical::MakeShield()
{
	return new eShield(iItem::eRarity::MYTHICAL, rand() % 240 + 20, rand() % 160);
}

iItem* FactoryMythical::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::MYTHICAL, rand() % 80 + 20, rand() % 80);
}

iItem* FactoryMythical::MakeChest()
{
	return new eChest(iItem::eRarity::MYTHICAL, rand() % 320 + 20, rand() % 400);
}

iItem* FactoryMythical::MakeHelm()
{
	return new eHelm(iItem::eRarity::MYTHICAL, rand() % 80 + 20, rand() % 80);
}

iItem* FactoryMythical::Make(iItem::eType type)
{
	switch (type)
	{
	case iItem::eType::BOOTS:  return MakeBoots();
	case iItem::eType::CHEST:  return MakeChest();
	case iItem::eType::HELM:   return MakeHelm();
	case iItem::eType::SHIELD: return MakeShield();
	case iItem::eType::WEAPON: return MakeWeapon();
	default:;
	}
	return nullptr;
}

iItem* FactoryMythical::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}
