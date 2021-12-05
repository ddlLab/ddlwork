#pragma once
#include "iitem.h"

class FactoryMythical
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
