#pragma once

#include "doubl_ll.h"

template <class T>
class Set : private dll::DoublLinkedList<T>
{
	using Parent = dll::DoublLinkedList<T>;
public:
	size_t Size() const { return Parent::Size(); }
	std::string ToString() const { return Parent::ToString(); }

	void push(T val) { if(!Parent::Has(val)) Parent::push_back(val); }
	void pop() { Parent::pop_back(); }

};
