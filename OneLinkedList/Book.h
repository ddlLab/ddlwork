#pragma once

#include<string>
#include<sstream>

class Book
{
public:
	Book(std::string _autor, int _tiraz, float _cost)
	: autor(_autor)
	, cost(_cost)
	, tiraz(_tiraz)
	{}

	std::string ToString() const
	{
		std::ostringstream oss;
		oss << "{" << autor << "," << cost << "," << tiraz << "}";
		return oss.str();
	}
	bool operator == (const Book& o) const { return autor == o.autor; }
	bool operator!=(const Book& o) const { return !operator==(o); }
	float cost = 0;
	int tiraz = 0;
	std::string autor;
};

std::ostream& operator<<(std::ostream& os, const Book& book);

