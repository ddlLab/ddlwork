#pragma once

#include "double_linked_list.h"

namespace dll {

template <class T>
class Stak : private List<T>
{
	using Parent = List<T>;
public:
	size_t Size() const { return Parent::Size(); }
	std::string ToString() const { return Parent::ToString(); }

	void push(T val) { Parent::push_back(val); }
	void pop() { Parent::pop_back(); }
};

} // namespace dll