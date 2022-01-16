#pragma once

#include <string>
#include <sstream>

namespace dll
{

template<class T>
class Node
{
public:
	Node(T data,
		 Node<T>* next = nullptr,
		 Node<T>* prev = nullptr);

	Node<T>*& Next() { return next; }
	const Node<T>* Next() const { return next; }

	Node<T>*& Prev() { return prev; }
	const Node<T>* Prev() const { return prev; }

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

template<class T>
Node<T>::Node(T _data, Node<T>* _next, Node<T>* _prev)
: data(_data)
, next(_next)
, prev(_prev)
{}

template<class T>
std::string Node<T>::ToString() const
{
	std::ostringstream oss;
	oss << data << " ";
	if (!IsLast())
	{
		oss << next->ToString();
	}
	return oss.str();
}

template<class T>
std::string Node<T>::ToStringR() const
{
	std::ostringstream oss;
	oss << data << " ";
	if (!IsFirst())
	{
		oss << prev->ToString();
	}
	return oss.str();
}

} // namespace dll