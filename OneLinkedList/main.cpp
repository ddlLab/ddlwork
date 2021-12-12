#include <iostream>
#include "node.h"
#include "one_linked_list.h"

using namespace std;

int main()
{
	OneLinkedList list;

	cout << list.Tostring() << endl;
	list.push_front(10);
	cout << list.Tostring() << endl;
	list.push_front(11);
	cout << list.Tostring() << endl;
	list.push_front(12);
	cout << list.Tostring() << endl;
	list.push_front(13);
	cout << list.Tostring() << endl;
	list.push_front(14);
	cout << list.Tostring() << endl;
	list.push_front(15);
	cout << list.Tostring() << endl;
	return 0;
}