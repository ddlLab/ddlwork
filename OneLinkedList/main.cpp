#include <iostream>
#include "one_linked_list.h"
#include "Book.h"
#include "double_linked_list.h"
#include "Queue.h"
#include "Stak.h"

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
int main()
{
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    //test7();
    test8();
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
    list.push_back({ "test1",100, 12.5 });
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
    dll::List<int> list;
    for (int i = 0; i < 10; ++i)
    {
    std::cout << list.ToString() << std::endl;
    std::cout << list.ToStringR() << std::endl;
    list.push_back(i);

    }
    while (list.Size() > 0)
    {
        std::cout << list.ToString() << std::endl;
        std::cout << list.ToStringR() << std::endl;
        list.pop_back();
    }
}

void test5()
{
    dll::List<float> list;
    for (float i = 0; i < 10; ++i)
    {
        std::cout << list.ToString() << std::endl;
        std::cout << list.ToStringR() << std::endl;
        list.push_front(i+0.5);

    }
    while (list.Size() > 0)
    {
        std::cout << list.ToString() << std::endl;
        std::cout << list.ToStringR() << std::endl;
        list.pop_front();
    }
}

void test6()
{
    dll::List<int> list;
    for (int i = 0; i < 10; ++i)
    {
        std::cout << list.ToString() << std::endl;
        std::cout << list.ToStringR() << std::endl;
        list.push_mid(i, 2);

    }
    while (list.Size() > 0)
    {
        std::cout << list.ToString() << std::endl;
        std::cout << list.ToStringR() << std::endl;
        list.pop_mid(3);
    }
}
    void test7()
    {
        dll::Queue <int> queue;
        for (int i = 0; i < 10; ++i)
        {
            std::cout << queue.ToString() << std::endl;
            queue.push(i);

        }
        while (queue.Size() > 0)
        {
            std::cout << queue.ToString() << std::endl;
            queue.pop();
        }
    }

    void test8()
    {
        dll::Stak <int> stak;
        for (int i = 0; i < 10; ++i)
        {
            std::cout << stak.ToString() << std::endl;
            stak.push(i);

        }
        while (stak.Size() > 0)
        {
            std::cout << stak.ToString() << std::endl;
            stak.pop();
        }
    }

