#pragma once

#include <string>
#include "dll_node.h"

namespace dll
{

	template<class T>
	class DoublLinkedList
	{
	public:
		size_t Size() const { return size; }
		std::string ToString() const;
		std::string ToStringR() const;

		void push_front(T val);
		void push_back(T val);
		void push_mid(T val, size_t pos);


		void pop_front();
		void pop_back();
		void pop_mid(size_t pos);
	private:
		Node<T>* head = nullptr;
		Node<T>* tail = nullptr;
		size_t size = 0;

	};

	template<class T>
	std::string DoublLinkedList<T>::ToString() const
	{
		std::ostringstream oss;
		oss << size << ":[";
		if (head)
		{
			oss << head->ToString();
		}
		oss << "]";
		return oss.str();
	}

	template<class T>
	std::string DoublLinkedList<T>::ToStringR() const
	{
		std::ostringstream oss;
		oss << size << ":[";
		if (head)
		{
			oss << tail->ToStringR();
		}
		oss << "]";
		return oss.str();
	}

	template<class T>
	void DoublLinkedList<T>::push_front(T val)
	{
		if (size == 0)
		{

			head = new Node<T>(val);
			tail = head;

		}
		else
		{
			head = new Node<T>(val, head);
			head->Next()->Prev() = head;
		}
		size++;
	}

	template<class T>
	void DoublLinkedList<T>::push_back(T val)
	{
		if (size == 0)
		{
			head = new Node<T>(val);
			tail = head;
		}
		else
		{
			tail->Next() = new Node<T>(val,nullptr, tail);
			tail = tail->Next();
		}
		size++;
	}
	template<class T>
	void DoublLinkedList<T>::pop_front()
	{
		if (size == 0)
			return;
		if (size == 1)
		{
			delete head;
			head = tail = nullptr;

		}
		else
		{
			Node<T>* t = head;
			head = head->Next();
			head->Prev() = nullptr;
			t->Next() = nullptr;
			delete t;
		}
		size--;

	}

	template<class T>
	void DoublLinkedList<T>::pop_back()
	{
		if (size == 0)
			return;
		if (size == 1)
		{
			delete head;
			head = tail = nullptr;

		}
		else
		{
			Node<T>* t = tail;
			t = tail->Prev();
			t->Next() = nullptr;
			tail->Prev() = nullptr;
			delete tail;
			tail = t;
		}
		size--;
	}

	template<class T>
	void DoublLinkedList<T>::push_mid(T val, size_t pos)
	{
		if (pos == 0)
		{
			push_front(val);
			return;
		}
		if (pos > Size())
		{
			push_back(val);
			return;
		}

		Node<T>* t = head;
		size_t k = 0;
		while (k != pos - 1)
		{
			t = t->Next();
			k++;
		}
		Node<T>* t1 = t->Next();
		Node<T>* item = new Node<T>(val, t1, t); //1-2
		t->Next() = item; // 3
		if (t1)
		{
		   t1->Prev() = item; // 4
		}
		size++;
	}

	template<class T>
	void DoublLinkedList<T>::pop_mid(size_t pos)
	{
		if (size == 0)
			return;
		if (pos == 0)
		{
			pop_front();
			return;
		}
		if (pos >= size)
		{
			pop_back();
			return;
		}

		Node<T>* t = head;
		size_t k = 0;
		while (k != pos - 1)
		{
			t = t->Next();
			k++;
		}
		Node<T>* del = t->Next();
		Node<T>* t1 = del->Next();
		t->Next() = t1;
		del->Prev() = nullptr;
		if (del == tail)
		{
			tail = t;
		}
		else if (t1)
		{
			t1->Prev() = t;
		}
		del->Next() = nullptr;
		delete del;
		size--;

	}

}//namespace dll