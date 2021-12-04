#include "factory_epic.h"
#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryEpic::MakeBoots()
{
	return new eBoots(iItem::eRarity::EPIC,rand() % 40 + 10, rand() % 40);
}

iItem* FactoryEpic::MakeShield()
{
	return new eShield(iItem::eRarity::EPIC, rand() % 120 + 20, rand() % 80 );
}

iItem* FactoryEpic::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::EPIC, rand() % 40 + 20, rand() % 40 );
}

iItem* FactoryEpic::MakeChest()
{
	return new eChest(iItem::eRarity::EPIC, rand() % 160 + 50, rand() % 200);
}

iItem* FactoryEpic::MakeHelm()
{
	return new eHelm(iItem::eRarity::EPIC, rand() % 40 + 50, rand() % 40);
}

iItem* FactoryEpic::Make(iItem::eType type)
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

iItem* FactoryEpic::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}
