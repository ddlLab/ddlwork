#include "factory_rare.h"
#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryRare::MakeBoots()
{
	return new eBoots(iItem::eRarity::RARE, rand() % 20 + 10, rand() % 20);
}

iItem* FactoryRare::MakeShield()
{
	return new eShield(iItem::eRarity::RARE, rand() % 60 + 20, rand() % 40);
}

iItem* FactoryRare::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::RARE, rand() % 20 + 20, rand() % 20);
}

iItem* FactoryRare::MakeChest()
{
	return new eChest(iItem::eRarity::RARE, rand() % 80 + 20, rand() % 100);
}

iItem* FactoryRare::MakeHelm()
{
	return new eHelm(iItem::eRarity::RARE, rand() % 20 + 20, rand() % 20);
}

iItem* FactoryRare::Make(iItem::eType type)
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

iItem* FactoryRare::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}
