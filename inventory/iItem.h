#pragma once
#include <string>


class iItem
{
public:
	virtual ~iItem() = default;
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
		LEGENDARY,
		MYSTICAL
	};
public:
	virtual bool CanUse() const = 0;
	virtual bool CanRepair() const = 0;
	virtual bool IsBroken() const = 0;
	virtual void Use() = 0;
	virtual void Repair() = 0;

	virtual std::string ToString() const = 0;
	virtual bool IsValid() const = 0;
	virtual eType Type() const = 0;
	virtual eRarity Rarity() const = 0;
};