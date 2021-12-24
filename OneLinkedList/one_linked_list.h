#pragma once
#include <string>
class Node;

class OneLinkedList
{
public:

	size_t Size() const {return size;}
	bool IsEmpty() const { return size == 0; }
	std::string ToString() const;

	void push_front(int val);
	void push_back(int val);
	void push_mid(int val, size_t id);
	void pop_front();
	void pop_back();
private:
	Node* head = nullptr;
	Node* tail = nullptr;
	size_t size = 0;
};