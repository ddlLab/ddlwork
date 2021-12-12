#include "Node.h"
#include <sstream>

Node::Node(int _data, Node* _next)
	: data(_data)
	, next(_next)
{}

string Node::ToString() const
{
	ostringstream oss;
	oss << data << " ";
	if (!IsLast())
	{
		oss << next->ToString();
	}
	return oss.str();
}


