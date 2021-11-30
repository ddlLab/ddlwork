#include "abstract_factory.h"
#include "factory_epic.h"
#include "factory_common.h"
#include "factory_mystical.h"
#include "factory_legendary.h"

iItem* AbstractFactory::MakeBoots()
{
	int val = rand() % 101;
	if (val < 15)
		return FactoryCommon::MakeBoots();
	else if(val<30)
	return FactoryEpic::MakeBoots();
	else if(val <45)
	return FactoryMystical::MakeBoots();
	else if(val <55)
	return FactoryLegendary::MakeBoots();
}
iItem* AbstractFactory::MakeShield()
{
	int val = rand() % 101;
	if (val < 20)
		return FactoryCommon::MakeShield();
	else if (val < 40)
		return FactoryEpic::MakeShield();
	else if (val < 60)
		return FactoryMystical::MakeShield();
	else if (val < 80)
		return FactoryLegendary::MakeShield();
}
iItem* AbstractFactory::MakeWeapon()
{
	int val = rand() % 101;
	if (val < 20)
		return FactoryCommon::MakeWeapon();
	else if (val < 40)
		return FactoryEpic::MakeWeapon();
	else if (val < 60)
		return FactoryMystical::MakeWeapon();
	else if (val < 80)
		return FactoryLegendary::MakeWeapon();
}
iItem* AbstractFactory::Make(iItem::eType)
{
	return nullptr;
}
iItem* AbstractFactory::Make(iItem::eRarity)
{
	return nullptr;
}
iItem* AbstractFactory::MakeChest()
{
	int val = rand() % 101;
	if (val < 20)
		return FactoryCommon::MakeChest();
	else if (val < 40)
		return FactoryEpic::MakeChest();
	else if (val < 60)
		return FactoryMystical::MakeChest();
	else if (val < 80)
		return FactoryLegendary::MakeChest();
}
iItem* AbstractFactory::MakeHelm()
{
	int val = rand() % 101;
	if (val < 20)
		return FactoryCommon::MakeHelm();
	else if (val < 40)
		return FactoryEpic::MakeHelm();
	else if (val < 60)
		return FactoryMystical::MakeHelm();
	else if (val < 80)
		return FactoryLegendary::MakeHelm();
}





