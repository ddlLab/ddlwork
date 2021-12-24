#include <iostream>
#include "one_linked_list.h"

int main()
{
	OneLinkedList list;
	std::cout << list.ToString() << std::endl;
	list.push_back(10);
	std::cout << list.ToString() << std::endl;
	list.push_back(11);
	std::cout << list.ToString() << std::endl;
	list.push_back(12);
	std::cout << list.ToString() << std::endl;
	list.push_back(13);
	std::cout << list.ToString() << std::endl;
	list.push_back(14);
	std::cout << list.ToString() << std::endl;
	list.push_back(15);
	std::cout << list.ToString() << std::endl;
	list.push_mid(5, 3);
	list.push_mid(6, 0);
	list.push_mid(7, 15);
	std::cout << list.ToString() << std::endl;
	
	while (!list.IsEmpty())
	{
		list.pop_back();
		std::cout << list.ToString() << std::endl;
	}
	return 0;
}