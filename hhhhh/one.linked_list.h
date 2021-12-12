#pragma once
#include <string>
class Node;

class OneLinkedList
{
public:
    size_t Size () const {return nullptr;}
    std::string ToString() const;
    void push_front(int val);
private:
    Node* head = nullptr;
    Node* tail = nullptr;
    size_t size = 0;
};
