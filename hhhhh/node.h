#pragma once
class Node
{
public:
    Node(int data, Node* next = nullptr);

    Node*& Next() {return next;}
    const Node* Next() const {return next;}

    int& Data() {return data;}
    const int& Data() const {return data;}

    bool IsLast() const {retutn next == nullptr;}
    string ToString() const;
private:
    Node* next = nullptr;
    int data = 0;
};

