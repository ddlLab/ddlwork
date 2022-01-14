#pragma once

#include <string>
#include <sstream>
#include "book.h"

std::ostream& operator <<(std::ostream& os, const Book& book)
{
	os << book.ToString();
	return os;

}
