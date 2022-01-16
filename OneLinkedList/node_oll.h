#pragma once

#include <string>
#include <sstream>

namespace oll
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
		std::string ToString() const;
	private:
		Node<T>* next = nullptr;
		T data = 0;
	};

	template<class T>
	Node<T>::Node(T _data, Node<T>* _next)
		: data(_data)
		, next(_next)
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

} // namespace oll