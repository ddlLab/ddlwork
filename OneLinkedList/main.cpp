#include <iostream>
#include "one_linked_list.h"
#include "double_linked_list.h"
#include "Book.h"

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();

int main()
{
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
    return 0;
}

void test1()
{
    oll:: OneLinkedList<int> list;
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

    list.push_mid(21, 0);
    std::cout << list.ToString() << std::endl;
    list.push_mid(22, 15);
    std::cout << list.ToString() << std::endl;
    list.push_mid(23, 3);
    std::cout << list.ToString() << std::endl;
    while (list.Size() > 0)
    {
        list.pop_mid(3);
        std::cout << list.ToString() << std::endl;
    }
}

void test2()
{
    oll::OneLinkedList<float> list;
    std::cout << list.ToString() << std::endl;
    list.push_back(10.2);
    std::cout << list.ToString() << std::endl;
    list.push_back(11.3);
    std::cout << list.ToString() << std::endl;
    list.push_back(12.5);
    std::cout << list.ToString() << std::endl;
    list.push_back(13.1);
    std::cout << list.ToString() << std::endl;
    list.push_back(14.4);
    std::cout << list.ToString() << std::endl;
    list.push_back(15.6);
    std::cout << list.ToString() << std::endl;

    list.push_mid(21.7, 0);
    std::cout << list.ToString() << std::endl;
    list.push_mid(22.8, 15);
    std::cout << list.ToString() << std::endl;
    list.push_mid(23.9, 3);
    std::cout << list.ToString() << std::endl;
    while (list.Size() > 0)
    {
        list.pop_mid(3);
        std::cout << list.ToString() << std::endl;
    }
}



void test3()
{
    oll::OneLinkedList<Book> list;
    std::cout << list.ToString() << std::endl;
    list.push_back({"test1",100, 12.5});
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test2",90, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test3",80, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test4",70, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test5",60, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test6",50, 12.5 });
    std::cout << list.ToString() << std::endl;

    list.push_mid({ "test7",40, 12.5 }, 0);
    std::cout << list.ToString() << std::endl;
    list.push_mid({ "test8",30, 12.5 }, 15);
    std::cout << list.ToString() << std::endl;
    list.push_mid({ "test9",20, 12.5 }, 3);
    std::cout << list.ToString() << std::endl;
    while (list.Size() > 0)
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
    list.push_mid(5,2);
    list.push_mid(6,2);
    list.push_mid(7,2);
    list.push_mid(8,2);
    list.push_mid(9,2);
    list.push_mid(10,2);
    while (list.Size() > 0)
    {
        std::cout << list.ToString() << std::endl;
        std::cout << list.ToStringR() << std::endl;
        list.pop_mid(1);
    }
    std::cout << list.ToString() << std::endl;
    std::cout << list.ToStringR() << std::endl;
}