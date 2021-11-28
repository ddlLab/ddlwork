#pragma once
#include "iItem.h"

#include "factoryCommon.h"
#include "factoryRare.h"
#include "factoryEpic.h"
#include "factoryLegendary.h"
#include "factoryMystical.h"

#include "Boots.h"
#include "Chest.h"
#include "Shield.h"
#include "Weapon.h"
#include "helm.h"

class AbstractFactory
{
public:
	static iItem* MakeBoots();
	static iItem* MakeShield();
	static iItem* MakeWeapon();
	static iItem* MakeChest();
	static iItem* MakeHelm();

	static iItem* Make(iItem::eType);
	static iItem* Make();
};