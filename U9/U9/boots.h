#pragma once

#include "eitem.h"


class eBoots : public eItem
{
public:
	eBoots(eRarity, int maxDurability, int speed);
	virtual ~eBoots() = default;

	virtual string	ToString()	const override;
	virtual bool	IsValid()	const override { return eItem::IsValid() && speed > 0; }

	int		GetSpeed()	   const { return speed; }
	void	SetSpeed(int _speed) { speed = _speed; }
protected:
	int speed = 0;
};
