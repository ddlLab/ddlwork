#include "factory_legendary.h"
#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryLegendary::MakeBoots()
{
	return new eBoots(iItem::eRarity::LEGENDARY, rand() % 160 + 10, rand() % 160);
}

iItem* FactoryLegendary::MakeShield()
{
	return new eShield(iItem::eRarity::LEGENDARY, rand() % 480 + 20, rand() % 320);
}

iItem* FactoryLegendary::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::LEGENDARY, rand() % 160 + 20, rand() % 160);
}

iItem* FactoryLegendary::MakeChest()
{
	return new eChest(iItem::eRarity::LEGENDARY, rand() % 640 + 20, rand() % 800);
}

iItem* FactoryLegendary::MakeHelm()
{
	return new eHelm(iItem::eRarity::LEGENDARY, rand() % 160 + 20, rand() % 160);
}

iItem* FactoryLegendary::Make(iItem::eType type)
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

iItem* FactoryLegendary::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}
