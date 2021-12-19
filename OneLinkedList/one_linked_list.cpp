#include "one_linked_list.h"
#include "node.h"
#include <sstream>

std::string OneLinkedList::ToString() const
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

void OneLinkedList::push_front(int val)
{
	if (size == 0)
	{
		head = new Node(val);
		tail = head;
	}
	else
	{
		head = new Node(val, head);
	}
	size++;
}

void OneLinkedList::push_back(int val)
{
	if (size == 0)
	{
		head = new Node(val);
		tail = head;
	}
	else
	{
		tail->Next() = new Node(val);
		tail = tail->Next();
	}
	size++;
}

void OneLinkedList::push_mid(int val, size_t pos)
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

	Node* t = head;
	size_t k = 0;
	while (k != pos - 1)
	{
		t = t->Next();
		k++;
	}
	Node* t1 = t->Next();
	t->Next() = new Node(val, t1);
	size++;
}

void OneLinkedList::pop_front()
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
		Node* t = head;
		head = head->Next();
		t->Next() = nullptr;
		delete t;
	}
	size--;
}

void OneLinkedList::pop_back()
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
		Node* t = head;
		while (t->Next() != tail)
		{
			t = t->Next();
		}
		
		t->Next() = nullptr;
		delete tail;
		tail = t;
	}
	size--;
}
