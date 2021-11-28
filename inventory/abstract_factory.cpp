#include "abstract_factory.h"


iItem* AbstractFactory::MakeBoots()
{
	int val = rand() % 101;
	if (val < 15)
		return FactoryMystical::MakeBoots();
	else if (val < 30)
		return FactoryLegendary::MakeBoots();
	else if (val < 45)
		return FactoryEpic::MakeBoots();
	else if (val < 60)
		return FactoryRare::MakeBoots();

	return FactoryCommon::MakeBoots();
}

iItem* AbstractFactory::MakeChest()
{
	int val = rand() % 101;
	if (val < 15)
		return FactoryMystical::MakeChest();
	else if (val < 30)
		return FactoryLegendary::MakeChest();
	else if (val < 45)
		return FactoryEpic::MakeChest();
	else if (val < 60)
		return FactoryRare::MakeChest();

	return FactoryCommon::MakeChest();
}

iItem* AbstractFactory::MakeHelm()
{
	int val = rand() % 101;
	if (val < 15)
		return FactoryMystical::MakeHelm();
	else if (val < 30)
		return FactoryLegendary::MakeHelm();
	else if (val < 45)
		return FactoryEpic::MakeHelm();
	else if (val < 60)
		return FactoryRare::MakeHelm();

	return FactoryCommon::MakeHelm();
}

iItem* AbstractFactory::MakeShield()
{
	int val = rand() % 101;
	if (val < 15)
		return FactoryMystical::MakeShield();
	else if (val < 30)
		return FactoryLegendary::MakeShield();
	else if (val < 45)
		return FactoryEpic::MakeShield();
	else if (val < 60)
		return FactoryRare::MakeShield();

	return FactoryCommon::MakeShield();
}

iItem* AbstractFactory::MakeWeapon()
{
	int val = rand() % 101;
	if (val < 15)
		return FactoryMystical::MakeWeapon();
	else if (val < 30)
		return FactoryLegendary::MakeWeapon();
	else if (val < 45)
		return FactoryEpic::MakeWeapon();
	else if (val < 60)
		return FactoryRare::MakeWeapon();

	return FactoryCommon::MakeWeapon();
}

iItem* AbstractFactory::Make(iItem::eType type)
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

iItem* AbstractFactory::Make()
{
	int val = rand() % ((int)iItem::eType::TOTAL_COUNT);
	return Make((iItem::eType)val);
}