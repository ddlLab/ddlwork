#pragma once

#include "eitem.h"


class eShield : public eItem
{
public:
	eShield(eRarity, int maxDurability, int damageResist);
	virtual ~eShield() = default;

	virtual string	ToString()	const override;
	virtual bool	IsValid()	const override { return eItem::IsValid() && damageResist > 0; }

	int		GetDamageResistance()	   const { return damageResist; }
	void	SetDamageResistance(int _damageResist) { damageResist = _damageResist; }
protected:
	int damageResist = 0;
};
