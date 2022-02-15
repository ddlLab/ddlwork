#pragma once

#include "tree_node.h"

namespace tree
{
	template <class T>
	class Tree
	{
	public:
		void Add(T data);
		void Drop(const T& data);
		bool Has(const T& data) const;

		std::string ToString() const;
	private:
		Node<T>* root = nullptr;
		size_t size = 0;
	};
	template <class T>
	void Tree<T>::Add(T data)
	{
		if (!root)
		{
			root = new Node<T>(data);
		}
		else
		{
			root->Add(data);
		}
		++size;
	}

	template <class T>
	void Tree<T>::Drop(const T& data)
	{

	}

	template <class T>
	bool Tree<T>::Has(const T& data) const
	{
		if (!root)
		{
			return false;
		}
		return root->Has(data);
	}

	template <class T>
	std::string Tree<T>::ToString() const
	{
		if (!root)
		{
			return "";
		}
		return root->ToString();
	}
} // namespace tree