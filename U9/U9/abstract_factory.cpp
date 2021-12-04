#include "abstract_factory.h"
#include "factory_epic.h"
#include "factory_common.h"
#include "factory_rare.h"
#include "factory_mythical.h"
#include "factory_legendary.h"

iItem* AbstractFactory::MakeBoots()
{
	int val = rand() % 101;
	if (val < 50)
		return FactoryCommon::MakeBoots();
	else if (val < 75)
		return FactoryRare::MakeBoots();
	else if (val < 90)
		return FactoryEpic::MakeBoots();
	else if (val < 97)
		return FactoryMythical::MakeBoots();
	return FactoryLegendary::MakeBoots();
}

iItem* AbstractFactory::MakeShield()
{
	int val = rand() % 101;
	if (val < 50)
		return FactoryCommon::MakeShield();
	else if (val < 75)
		return FactoryRare::MakeShield();
	else if (val < 90)
		return FactoryEpic::MakeShield();
	else if (val < 97)
		return FactoryMythical::MakeShield();
	return FactoryLegendary::MakeShield();
}

iItem* AbstractFactory::MakeWeapon()
{
	int val = rand() % 101;
	if (val < 50)
		return FactoryCommon::MakeWeapon();
	else if (val < 75)
		return FactoryRare::MakeWeapon();
	else if (val < 90)
		return FactoryEpic::MakeWeapon();
	else if (val < 97)
		return FactoryMythical::MakeWeapon();
	return FactoryLegendary::MakeWeapon();
}

iItem* AbstractFactory::MakeChest()
{
	int val = rand() % 101;
	if (val < 50)
		return FactoryCommon::MakeChest();
	else if (val < 75)
		return FactoryRare::MakeChest();
	else if (val < 90)
		return FactoryEpic::MakeChest();
	else if (val < 97)
		return FactoryMythical::MakeChest();
	return FactoryLegendary::MakeChest();
}

iItem* AbstractFactory::MakeHelm()
{
	int val = rand() % 101;
	if (val < 50)
		return FactoryCommon::MakeHelm();
	else if (val < 75)
		return FactoryRare::MakeHelm();
	else if (val < 90)
		return FactoryEpic::MakeHelm();
	else if (val < 97)
		return FactoryMythical::MakeHelm();
	return FactoryLegendary::MakeHelm();
}

iItem* AbstractFactory::Make(iItem::eType type)
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

iItem* AbstractFactory::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}
