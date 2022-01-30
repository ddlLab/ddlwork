#pragma once

#include "double_linked_list.h"

template <class T>
class Queue : private dll::DoubleLinkedList<T>
{
	using Parent = dll::DoubleLinkedList<T>;
public:
	size_t Size() const { return Parent::Size();  }
	std::string ToString() const { return Parent::ToString(); }
	std::string ToString() const { return Parent::ToStringR(); }

	void push(T val) { Parent::push_back(val); }
	void pop()      { Parent::pop_front(); }
};