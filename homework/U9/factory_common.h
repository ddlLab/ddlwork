#pragma once
#include "iItem.h"

class FactoryCommon
{
public:
	static iItem* MakeBoots();
	static iItem* MakeShield();
	static iItem* MakeWeapon();
	static iItem* MakeChest();
	static iItem* MakeHelm();

	static iItem* Make(iItem::eType);
	static iItem* Make(iItem::eRarity);
};