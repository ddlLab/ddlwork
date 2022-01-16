#pragma once

#include <string>
#include <sstream>

namespace dll
{

template<class T>
class Node
{
public:
	Node(T data, Node<T>* next = nullptr);

	Node<T>*& Next() { return next; }
	const Node<T>* Next() const { return next; }

	T& Data() { return data; }
	const T& Data() const { return data; }

	bool IsLast() const { return next == nullptr; }
	bool IsFirst() const { return prev == nullptr; }
	std::string ToString() const;
	std::string ToStringR() const;
private:
	Node<T>* next = nullptr;
	Node<T>* prev = nullptr;
	T data = 0;
};

} // namespace dll