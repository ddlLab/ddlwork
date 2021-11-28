#pragma once

#include <string>

using namespace std;

class iItem
{
public:
	enum class eType
	{
		CHEST,
		WEAPON,
		HELM,
		SHIELD,
		BOOTS,
		TOTAL_COUNT = 5
	};

	enum class eRarity
	{
		COMMON,
		RARE,
		EPIC,
		MYTHICAL,
		LEGENDARY
	};
public:
	virtual ~iItem() = default;

	virtual bool	 CanUse()		const = 0;
	virtual bool	 CanRepair()	const = 0;
	virtual bool	 IsBroken()		const = 0;
	virtual void	 Use()				  = 0;
	virtual void	 Repair()		      = 0;

	virtual string   ToString()	const = 0;
	virtual bool     IsValid()	const = 0;
	virtual eType    Type()		const = 0;
	virtual eRarity  Rarity()	const = 0;
};
