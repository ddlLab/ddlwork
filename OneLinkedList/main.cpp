#include <iostream>
#include "node.h"
#include "one_linked_list.h"

using namespace std;

int main()
{
	OneLinkedList list;

	cout << list.Tostring() << endl;
	list.push_back(10);
	cout << list.Tostring() << endl;
	list.push_back(11);
	cout << list.Tostring() << endl;
	list.push_back(12);
	cout << list.Tostring() << endl;
	list.push_back(13);
	cout << list.Tostring() << endl;
	list.push_back(14);
	cout << list.Tostring() << endl;
	list.push_back(15);
	cout << list.Tostring() << endl;

	list.push_mid(21,0);
	cout << list.Tostring() << endl;
	list.push_mid(22,7);
	cout << list.Tostring() << endl;
	list.push_mid(23,3);
	cout << list.Tostring() << endl;

	while (list.Size() > 0)
	{
		list.pop_back();
		cout << list.Tostring() << endl;
	}
	return 0;
}