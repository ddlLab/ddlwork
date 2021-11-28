#pragma once

#include "item.h"


class eShield : public Item
{
public:
	eShield(eRarity, int maxDurability, int protection);
	virtual ~eShield() = default;

	virtual std::string	ToString()	const override;
	virtual bool		IsValid()	const override { return Item::IsValid(); }

	int		GetProtection()			const { return protection; }
	void	SetProtection(int _protection) { protection = _protection; }
protected:
	int protection = 0;
};