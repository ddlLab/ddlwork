#include "node.h"
#include <sstream>

Node::Node(int _data, Node* _next)
: data(_data)
, next(_next)
{}

std::string Node::ToString() const
{
	std::ostringstream oss;
	oss << data << " ";
	if (!IsLast())
	{
		oss << next->ToString();
	}
	return oss.str();
}