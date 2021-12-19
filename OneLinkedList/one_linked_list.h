#pragma once
#include <string>

using namespace std;

class Node;

class OneLinkedList
{
public:
	size_t Size() const { return size; }
	string Tostring() const;

	void push_front(int val);
	void push_back(int val);
	void push_mid(int val, size_t pos);

	void pop_front();
	void pop_back();

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	size_t size = 0;
};