#include <iostream>
#include "one_linked_list.h"
#include "Book.h"

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
    list.push_back(1.0);
    std::cout << list.ToString() << std::endl;
    list.push_back(1.1);
    std::cout << list.ToString() << std::endl;
    list.push_back(1.2);
    std::cout << list.ToString() << std::endl;
    list.push_back(1.3);
    std::cout << list.ToString() << std::endl;
    list.push_back(1.4);
    std::cout << list.ToString() << std::endl;
    list.push_back(1.5);
    std::cout << list.ToString() << std::endl;

    list.push_mid(2.1, 0);
    std::cout << list.ToString() << std::endl;
    list.push_mid(2.2, 1.5);
    std::cout << list.ToString() << std::endl;
    list.push_mid(2.3, 3.0);
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
    list.push_back({"test1", 100, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test2", 90, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test3", 80, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test4", 70, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({ "test5", 60, 12.5 });
    std::cout << list.ToString() << std::endl;
    list.push_back({"test6", 50, 12.5 });
    std::cout << list.ToString() << std::endl;

    list.push_mid({ "test7", 40, 12.5 }, 0);
    std::cout << list.ToString() << std::endl;
    list.push_mid({ "test8", 30, 12.5 }, 15);
    std::cout << list.ToString() << std::endl;
    list.push_mid({ "test9", 20, 12.5 }, 3);
    std::cout << list.ToString() << std::endl;
    while (list.Size() > 0)
    {
        list.pop_mid(3);
        std::cout << list.ToString() << std::endl;
    }
}