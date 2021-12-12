#include "one_linked_list.h"
#include "node.h"
#include <sstream>


std::string OneLinkedList::ToString() const
{
	std::ostringstream oss;
	oss << size << ":[";
	if (head)
	{
		oss << head->ToString();
	}
	oss << "]";
	return oss.str();
}

void OneLinkedList::push_front(int val)
{
	if (size == 0)
	{
		head = new Node(val);
		tail = head;
	}
	else
	{
		head = new Node(val, head);
	}
	++size;
}