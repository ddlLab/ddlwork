#include "abstract_factory.h"
#include "factory_epic.h"
#include "factory_common.h"

iItem* AbstractFactory::MakeBoots()
{
	int val = rand() % 101;
	if (val < 60)
		return FactoryCommon::MakeBoots();
	return FactoryEpic::MakeBoots();
}
