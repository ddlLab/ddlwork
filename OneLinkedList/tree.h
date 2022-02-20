#pragma once

#include <string>
#include "tree_node.h"
#include <vector>

namespace tree
{

template<class T>
class Tree
{
public:

	~Tree() { Clear(); }

	void Add(T data);
	void Drop (T data);
	bool Has (const T& data) const;

	std::string ToString() const;
	void Clear();
	bool Empty() const { return root == nullptr; }

	void ToVector(std::vector<T>& result) const;
private:
	void Add(const std::vector<T>& items, size_t begin, size_t end);

	Node<T>* root = nullptr;
	size_t size = 0;
};

template<class T>
void Tree<T>::Add(const std::vector<T>& items, size_t begin, size_t end)
{
	if (begin >= 0 && end <= items.size() && begin!=end && begin < end)
	{
		size_t mid = (begin + end) / 2;
		if (Has(items[mid]))
		{
			return;
		}
		if (mid < items.size())
		{
			Add(items[mid]);
		}
		Add(items, begin, mid);
		Add(items, mid, end);
	}
}

template<class T>
void Tree<T>::ToVector(std::vector<T>& result) const
{
	if (!Empty())
	{
		root->ToVector(result);
	}
}

template<class T>
void Tree<T>::Add (T data)
{
	if (!root)
	{
		root = new Node<T>(data);
	}
	else
	{
		root->Add(data);
	}
	size++;
}

template<class T>
void Tree<T>::Drop (T data)
{
	if(!Has(data))
	{
		return;
	}
	std::vector<T> items;
	ToVector(items);
	Clear();
	auto it = find_if(items.begin(), items.end(), [data](T item)
		{
			return item == data;
		});
	items.erase(it);
	Add(items, 0, items.size());
}

template<class T>
bool Tree<T>::Has (const T& data) const
{
	if (!root)
	{
		return false;
	}
	return root->Has(data);
}

template<class T>
std::string Tree<T>::ToString() const
{
	if (!root)
	{
		return "";
	}
	return root->ToString();
}

template<class T>
void Tree<T>::Clear()
{
	if (!Empty())
	{
		delete root;
		root = nullptr;
		size = 0;
	}	
}

} //namespace tree