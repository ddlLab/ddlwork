#include <iostream>
#include "one_linked_list.h"

int main()
{
	OneLinkedList list;
	cout << list.ToString() << endl;
	list.push_front(10);
	cout << list.ToString() << endl;
	list.push_front(11);
	cout << list.ToString() << endl;
	list.push_front(12);
	cout << list.ToString() << endl;
	list.push_front(13);
	cout << list.ToString() << endl;
	list.push_front(14);
	cout << list.ToString() << endl;
	list.push_front(15);
	cout << list.ToString() << endl;
	return 0;
}