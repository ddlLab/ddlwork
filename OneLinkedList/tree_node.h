#pragma once
#include <string>
#include <sstream>
#include <vector>

namespace tree
{
	template <class T>
	class Node
	{

	public:
		Node(T data, Node<T>* next = nullptr, Node<T>* prev = nullptr);
		~Node();
		Node<T>*& Left() { return left; }
		Node<T>*& Right() { return right; }

		const Node<T>* Left() const { return left; }
		const Node<T>* Right() const { return right; }

		T& Data() { return data; }
		const T& Data() const { return data; }

		bool HasLeft() const { return left != nullptr; }
		bool HasRight() const { return right != nullptr; }
		std::string ToString() const;
	

		bool Has(const T& data) const;
		bool Add(T data);

		void ToVector(std::vector<T>& result)const;

	private:
		Node<T>* left = nullptr;
		Node<T>* right = nullptr;
		T data;
	};
	template<class T>
	Node<T>::~Node()
	{
		if (left)
		{
			delete left;
			left = nullptr;
			
		}
		if (right)
		{
			delete right;
			right = nullptr;
		}
	}
	template<class T>
	void Node<T>::ToVector(std::vector<T>& result)const
	{
		if (left)
		{
			left->ToVector(result);
		}
		result.push_back(data);
		if (right)
		{
			right ->ToVector(result);
		}
	}

			template<class T>
			bool Node<T>:: Has(const T& _data) const
			{

				if (data == _data)
					return true;
				if (data > _data)
				{
					if (!left)
						return false;
					return left->Has(_data);
				}
				if (!right)
					return false;
				return right->Has(_data);
			}

			template<class T>
			bool Node<T>::Add(T _data)
			{
				if (data == _data)
					return false;
				if (data > _data)
				{
					if (!left)
					{
						left = new Node(_data);
						return true;
					}
					return left->Add(_data);

				}
				if (!right)
				{
					right = new Node(_data);
					return true;
				}
				return right->Add(_data);
			}
		
		template<class T>
		Node<T>::Node(T _data, Node<T>* _left, Node<T>* _right)
			: data(_data)
			, left(_left)
			, right(_right)
		{}

		template<class T>
		std::string Node<T>::ToString() const
		{
			std::ostringstream oss;
		
			if (HasLeft())
			{
				oss << left->ToString();
			}

			oss << data << " ";
			if (HasRight())
			{
				oss << right->ToString();
			}
			return oss.str();
		}
		
	
	

}// namespace tree