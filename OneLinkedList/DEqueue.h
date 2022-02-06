#pragma once
#include "double_linked_list.h"


template <class T>
class DEQueue :private dll::DoubleLinkedList<T>
{
	using Parent = dll::DoubleLinkedList<T>;
public:
	size_t Size() const { return Parent::Size(); }
	std::string ToString() const { return Parent::ToString(); }


	void push_back(T val) { Parent::push_back(val); }
	void pop_front(T val) { Parent::pop_front(val); }
	void pop_front() { Parent::pop_front(); }
	void pop_back() { Parent::pop_back(); }

};

