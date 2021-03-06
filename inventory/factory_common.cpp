#include "factory_common.h"
#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryCommon::MakeBoots()
{
	return new eBoots(iItem::eRarity::COMMON, rand() % 50 + 10, rand() % 15);
}

iItem* FactoryCommon::MakeShield()
{
	return new eShield(iItem::eRarity::COMMON, rand() % 100 + 20, rand() % 50 );
}

iItem* FactoryCommon::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::COMMON, rand() % 100 + 20, rand() % 50 );
}

iItem* FactoryCommon::MakeChest()
{
	return new eChest(iItem::eRarity::COMMON, rand() % 200 + 50, rand() % 70);
}

iItem* FactoryCommon::MakeHelm()
{
	return new eHelm(iItem::eRarity::COMMON, rand() % 50 + 50, rand() % 70);
}

iItem* FactoryCommon::Make(iItem::eType type)
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

iItem* FactoryCommon::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}
