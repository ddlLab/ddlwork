#pragma once
#include <string>

using namespace std;

class Node
{
public:
	Node(int data, Node* next = nullptr);

	Node*& Next(){ return next; }
	const Node* Next() const{ return next; }

	int& Data() { return data; }
	const int& Data() const { return data; }

	bool IsLast() const { return next == nullptr; }
	string ToString() const;
private:
	Node* next = nullptr;
	int data = 0;
};
