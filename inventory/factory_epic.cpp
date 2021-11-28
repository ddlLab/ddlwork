#include "factory_epic.h"
#include "boots.h"
#include "shield.h"
#include "weapon.h"
#include "chest.h"
#include "helm.h"

iItem* FactoryEpic::MakeBoots()
{
	return new eBoots(iItem::eRarity::EPIC,rand() % 50 + 10, rand() % 15);
}

iItem* FactoryEpic::MakeShield()
{
	return new eShield(iItem::eRarity::EPIC, rand() % 100 + 20, rand() % 50 );
}

iItem* FactoryEpic::MakeWeapon()
{
	return new eWeapon(iItem::eRarity::EPIC, rand() % 100 + 20, rand() % 50 );
}

iItem* FactoryEpic::MakeChest()
{
	return new eChest(iItem::eRarity::EPIC, rand() % 200 + 50, rand() % 70);
}

iItem* FactoryEpic::MakeHelm()
{
	return new eHelm(iItem::eRarity::EPIC, rand() % 50 + 50, rand() % 70);
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
