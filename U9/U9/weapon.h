#pragma once

#include "eitem.h"


class eWeapon : public eItem
{
public:
	eWeapon(eRarity, int maxDurability, int damage);
	virtual ~eWeapon() = default;

	virtual string	ToString()	const override;
	virtual bool	IsValid()	const override { return eItem::IsValid() && damage > 0; }

	int		GetDamage()	   const { return damage; }
	void	SetDamage(int _damage) { damage = _damage; }
protected:
	int damage = 0;
};
