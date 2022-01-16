#include <iostream>
#include "one_linked_list.h"
#include "book.h"



void test1();
void test2();
void test3();


int main()
{
	test1();
	test2();
	test3();
	return 0;
}


void test1()
{
	oll::OneLinkedList<int> list;
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
		list.pop_mid(3);
		std::cout << list.ToString() << std::endl;
	}
}
void test2()
{
	oll::OneLinkedList<float> list;
	std::cout << list.ToString() << std::endl;
	list.push_back(10.1);
	std::cout << list.ToString() << std::endl;
	list.push_back(11.2);
	std::cout << list.ToString() << std::endl;
	list.push_back(12.3);
	std::cout << list.ToString() << std::endl;
	list.push_back(13.4);
	std::cout << list.ToString() << std::endl;
	list.push_back(14.5);
	std::cout << list.ToString() << std::endl;
	list.push_back(15.6);
	std::cout << list.ToString() << std::endl;
	list.push_mid(5.7, 3);
	list.push_mid(6.8, 0);
	list.push_mid(7.9, 15);
	std::cout << list.ToString() << std::endl;

	while (!list.IsEmpty())
	{
		list.pop_mid(3);
		std::cout << list.ToString() << std::endl;
	}
}


void test3()
{
	oll::OneLinkedList<Book> list;
	std::cout << list.ToString() << std::endl;
	list.push_back({ "Lev Tolstoy1", 5, 10 });
	std::cout << list.ToString() << std::endl;
	list.push_back({ "Lev Tolstoy2", 6, 11 });
	std::cout << list.ToString() << std::endl;
	list.push_back({ "Lev Tolstoy3", 7, 15 });
	std::cout << list.ToString() << std::endl;
	list.push_back({ "Lev Tolstoy4", 8, 16 });
	std::cout << list.ToString() << std::endl;
	list.push_back({ "Lev Tolstoy5", 9, 13 });
	std::cout << list.ToString() << std::endl;
	list.push_back({ "Lev Tolstoy6", 1, 18 });
	std::cout << list.ToString() << std::endl;
	list.push_mid({ "Lev Tolstoy7", 2, 12 },0);
	list.push_mid({ "Lev Tolstoy8", 3, 13 }, 3);
	list.push_mid({ "Lev Tolstoy9", 4, 7 }, 10);
	std::cout << list.ToString() << std::endl;

	while (!list.IsEmpty())
	{
		list.pop_mid(3);
		std::cout << list.ToString() << std::endl;
	}
}
