#include <iostream>
#include "one_linked_list.h"

int main()
{
	OneLinkedList list;
	cout << list.ToString() << endl;
	list.push_back(10);
	cout << list.ToString() << endl;
	list.push_back(11);
	cout << list.ToString() << endl;
	list.push_back(12);
	cout << list.ToString() << endl;
	list.push_back(13);
	cout << list.ToString() << endl;
	list.push_back(14);
	cout << list.ToString() << endl;
	list.push_back(15);
	cout << list.ToString() << endl;

	list.push_mid(21, 0);
	cout << list.ToString() << endl;
	list.push_mid(22, 15);
	cout << list.ToString() << endl;
	list.push_mid(23, 3);
	cout << list.ToString() << endl;
	while (list.Size() > 0)
	{
		list.pop_back();
		cout << list.ToString() << endl;
	}
	return 0;
}