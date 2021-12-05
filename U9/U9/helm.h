#pragma once

#include "eitem.h"


class eHelm : public eItem
{
public:
	eHelm(eRarity, int maxDurability, int defense);
	virtual ~eHelm() = default;

	virtual string	ToString()	const override;
	virtual bool	IsValid()	const override { return eItem::IsValid() && defense > 0; }

	int		GetDefense()	   const { return defense; }
	void	SetDefense(int _defense) { defense = _defense; }
protected:
	int defense = 0;
};
