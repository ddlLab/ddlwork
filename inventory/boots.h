#pragma once

#include "item.h"


class eBoots : public Item
{
public:
	eBoots(eRarity, int maxDurability, int defense);
	virtual ~eBoots() = default;

	virtual std::string	ToString()	const override;
	virtual bool		IsValid()	const override { return Item::IsValid() && defense > 0; }

	int		GetDefense()			const { return defense; }
	void	SetDefense(int _defense) { defense = _defense; }
protected:
	int defense = 0;
};