#pragma once

#include "iItem.h"

class eItem : public iItem
{
public:
	eItem(eType, eRarity, int maxDurability);
	virtual ~eItem() = default;

	virtual bool    CanUse()	const override { return !IsBroken(); }
	virtual bool    CanRepair() const override { return IsBroken() && maxDurability > 1; }
	virtual bool    IsBroken()  const override { return durability <= 0; }
	virtual void    Use()			  override;
	virtual void    Repair()		  override;

	virtual string  ToString()  const override;
	virtual bool    IsValid()   const override { return durability >= 0 && maxDurability > 0; }
	virtual eType   Type()	    const override { return type; }
	virtual eRarity Rarity()    const override { return rarity; }
protected:
	eType type;
	eRarity rarity;
	int durability = 0;
	int maxDurability = 0;
};
