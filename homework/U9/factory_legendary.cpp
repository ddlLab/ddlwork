#include "factory_common.h"
#include "factory_epic.h"
#include "factory_legendary.h"
#include "factory_mystical.h"

#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryLegendary::MakeBoots()
{
	return new eBoots(iItem::eRarity::LEGENDARY, rand() % 50 + 10, rand() % 15);
}

iItem* FactoryLegendary::MakeShield()
{
	return new eShield(iItem::eRarity::LEGENDARY, rand() % 100 + 20, rand() % 50);
}

iItem* FactoryLegendary::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::LEGENDARY, rand() % 100 + 20, rand() % 50);
}

iItem* FactoryLegendary::MakeChest()
{
	return new eChest(iItem::eRarity::LEGENDARY, rand() % 200 + 50, rand() % 70);
}

iItem* FactoryLegendary::MakeHelm()
{
	return new eHelm(iItem::eRarity::LEGENDARY, rand() % 50 + 50, rand() % 70);
}

iItem* FactoryLegendary::Make(iItem::eType type)
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

iItem* FactoryLegendary::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}