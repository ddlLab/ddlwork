#pragma once

#include "eitem.h"


class eChest : public eItem
{
public:
	eChest(eRarity, int maxDurability, int defense);
	virtual ~eChest() = default;

	virtual string	ToString()	const override;
	virtual bool	IsValid()	const override { return eItem::IsValid() && defense > 0; }

	int		GetDefense()	   const { return defense; }
	void	SetDefense(int _defense) { defense = _defense; }
protected:
	int defense = 0;
};