#pragma once

#include "item.h"


class eWeapon : public Item
{
public:
	eWeapon(eRarity, int maxDurability, int damage);
	virtual ~eWeapon() = default;

	virtual std::string	ToString()	const override;
	virtual bool		IsValid()	const override { return Item::IsValid(); }


	int		GetDamage()			const { return damage; }
	void	SetDamage (int _damage) { damage = _damage; }
protected:
	int damage = 0;
};