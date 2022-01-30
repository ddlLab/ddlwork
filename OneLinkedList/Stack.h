#pragma once

#include "doubl_ll.h"

template <class T>
class Stack : private dll::DoublLinkedList<T>
{
	using Parent = dll::DoublLinkedList<T>;
public:
	size_t Size() const { return Parent::Size(); }
	std::string ToString() const { return Parent::ToString(); }

	void push(T val) { Parent::push_back(val); }
	void pop() { Parent::pop_back(); }

};