#include <iostream>
#include "one_linked_list.h"
#include "double_linked_list.h"
#include "queue.h"
#include "stack.h"
#include "book.h"
#include "set1.h"



void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();
void test10();

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9();
	test10();
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

void test4()
{
	dll::DoubleLinkedList<int> list;
	list.push_front(5);
	list.push_front(6);
	list.push_front(7);
	list.push_front(8);
	list.push_front(9);
	list.push_front(10);
	while (list.Size() > 0)
	{
		std::cout << list.ToString() << std::endl;
		std::cout << list.ToStringR() << std::endl;
		list.pop_back();
	}
	std::cout << list.ToString() << std::endl;
	std::cout << list.ToStringR() << std::endl;
}

void test5()
{
	dll::DoubleLinkedList<int> list;
	list.push_back(5);
	list.push_back(6);
	list.push_back(7);
	list.push_back(8);
	list.push_back(9);
	list.push_back(10);
	while (list.Size() > 0)
	{
		std::cout << list.ToString() << std::endl;
		std::cout << list.ToStringR() << std::endl;
		list.pop_front();
	}
	std::cout << list.ToString() << std::endl;
	std::cout << list.ToStringR() << std::endl;
}

void test6()
{
	dll::DoubleLinkedList<int> list;
	list.push_mid(5, 2);
	list.push_mid(6, 3);
	list.push_mid(7, 4);
	list.push_mid(8, 5);
	list.push_mid(9, 6);
	list.push_mid(10, 7);
	while (list.Size() > 0)
	{
		std::cout << list.ToString() << std::endl;
		std::cout << list.ToStringR() << std::endl;
		list.pop_mid(1);
	}
	std::cout << list.ToString() << std::endl;
	std::cout << list.ToStringR() << std::endl;
}

void test7()
{
	Queue<int> q1;
	q1.push(5);
	q1.push(6);
	q1.push(7);
	q1.push(8);
	q1.push(9);
	q1.push(10);
	while (q1.Size() > 0)
	{
		std::cout << q1.ToString() << std::endl;
		q1.pop();
	}
}

void test8()
{
	Stack<int> st1;
	st1.push(5);
	st1.push(6);
	st1.push(7);
	st1.push(8);
	st1.push(9);
	st1.push(10);
	while (st1.Size() > 0)
	{
		std::cout << st1.ToString() << std::endl;
		st1.pop();
	}
}

void test9()
{
	dll::Set<int> st1;
	st1.push(5);
	st1.push(5);
	st1.push(5);
	st1.push(6);
	st1.push(6);
	st1.push(6);
	st1.push(7);
	st1.push(7);
	st1.push(7);
	st1.push(8);
	st1.push(9);
	st1.push(10);
	while (st1.Size() > 0)
	{
		std::cout << st1.ToString() << std::endl;
		st1.pop();
	}
}

void test10()
{
	dll::Set<Book> st1;
	Book book1("t1", 12, 45);
	st1.push(book1);
	book1.autor = "t2";
	st1.push(book1);
	book1.cost = 74;
	st1.push(book1);
	book1.tiraz = 74;
	st1.push(book1);
	Book book2("t1", 12, 45);
	st1.push(book2);

	while (st1.Size() > 0)
	{
		std::cout << st1.ToString() << std::endl;
		st1.pop();
	}
}
