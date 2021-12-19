#pragma once
#include <string>


class Node;

class OneLinkedList
{
public:
	size_t Size() const { return size; }
	std::string ToString()const;

		void push_front(int val);
		void push_back(int val);
		void pop__front();
		void pop_back();
		void pop_mid();
		void push_mid(int val,size_t pos);


private:
	Node* head = nullptr;
	Node* tail = nullptr;
   size_t size = 0;
};
	