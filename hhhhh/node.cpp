#include "node.h"

Node::Node(int _data, Node* _next)
: data(_data)
, next(_next)
{}

std::string Node::ToString() const
{
    std::ostringstream oss;
    oss << data << " ";
    if(!IsLast())
    {
        oos << next->ToString();

    }
    return oss.str();
}
