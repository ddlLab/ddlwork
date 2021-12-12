#pragma once
#include <string>

using namespace std;

class Node;

class OneLinkedList
{
public:
	size_t Size() const { return size; }
	string ToString() const;

	void push_front(int val);
private:
	Node* head = nullptr;
	Node* tail = nullptr;
	size_t size = 0;
};