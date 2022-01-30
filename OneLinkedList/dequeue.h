#pragma once

#include "double_linked_list.h"

template <class T>
class Dequeue : private dll::DoubleLinkedList<T>
{
	using Parent = dll::DoubleLinkedList<T>;
public:
	size_t Size() const { return Parent::Size(); }
	std::string ToString() const { return Parent::ToString(); }
	std::string ToStringR() const { return Parent::ToStringR(); }

	void push_back(T val) { Parent::push_back(val); };
	void push_front(T val) { Parent::push_front(val); };
	void pop_front() { Parent::pop_front(); }
	void pop_back() { Parent::pop_back); }
};