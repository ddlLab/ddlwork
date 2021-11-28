#pragma once

#include "item.h"


class eChest : public Item
{
public:
	eChest(eRarity, int maxDurability, int defense);
	virtual ~eChest() = default;

	virtual std::string	ToString()	const override;
	virtual bool		IsValid()	const override { return Item::IsValid() && defense > 0; }

	int		GetDefense()			const { return defense; }
	void	SetDefense(int _defense) { defense = _defense; }
protected:
	int defense = 0;
};