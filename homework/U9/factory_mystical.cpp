#include "factory_common.h"
#include "factory_epic.h"
#include "factory_legendary.h"
#include "factory_mystical.h"

#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryMystical::MakeBoots()
{
	return new eBoots(iItem::eRarity::MYTHICAL, rand() % 50 + 10, rand() % 15);
}

iItem* FactoryMystical::MakeShield()
{
	return new eShield(iItem::eRarity::MYTHICAL, rand() % 80 + 30, rand() % 35);
}

iItem* FactoryMystical::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::MYTHICAL, rand() % 100 + 20, rand() % 50);
}

iItem* FactoryMystical::MakeChest()
{
	return new eChest(iItem::eRarity::MYTHICAL, rand() % 200 + 50, rand() % 70);
}

iItem* FactoryMystical::MakeHelm()
{
	return new eHelm(iItem::eRarity::MYTHICAL, rand() % 50 + 50, rand() % 70);
}

iItem* FactoryMystical::Make(iItem::eType type)
{
	switch (type)
	{
	case iItem::eType::BOOTS:	return MakeBoots();
	case iItem::eType::CHEST:	return MakeChest();
	case iItem::eType::HELM:	return MakeHelm();
	case iItem::eType::SHIELD:	return MakeShield();
	case iItem::eType::WEAPON:	return MakeWeapon();
	default:;
	}
	return nullptr;
}

iItem* FactoryMystical::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}