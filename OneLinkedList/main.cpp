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
    OneLinkedList<int> list;
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
    list.push_mid(21, 0);
    std::cout << list.ToString() << std::endl;
    list.push_mid(22, 15);
    std::cout << list.ToString() << std::endl;
    list.push_mid(23, 3);
    while (list.Size() > 0)
    {
        list.pop_mid(3);
        std::cout << list.ToString() << std::endl;
    }

}
void test2()
{
    OneLinkedList<float> list;
    std::cout << list.ToString() << std::endl;
    list.push_back(10.2);
    std::cout << list.ToString() << std::endl;
    list.push_back(11);
    std::cout << list.ToString() << std::endl;

    list.push_back(12.6);
    std::cout << list.ToString() << std::endl;
    list.push_back(13.7);
    std::cout << list.ToString() << std::endl;
    list.push_back(14);
    std::cout << list.ToString() << std::endl;
    list.push_back(15);
    list.push_mid(21, 0);
    std::cout << list.ToString() << std::endl;
    list.push_mid(22, 15);
    std::cout << list.ToString() << std::endl;
    list.push_mid(23, 3);
    while (list.Size() > 0)
    {
        list.pop_mid(3);
        std::cout << list.ToString() << std::endl;
    }
}
    void test3() 
    {
        OneLinkedList<Book> list;
        std::cout << list.ToString() << std::endl;
        list.push_back({ "test1",100,12.5 });
        std::cout << list.ToString() << std::endl;
        list.push_back({ "test2",299,12.5 });
        std::cout << list.ToString() << std::endl;

        list.push_back({ "test3",333,45.5 });
        std::cout << list.ToString() << std::endl;
        list.push_back({ "test4",44,45.6 });
        std::cout << list.ToString() << std::endl;
        list.push_back({ "test5",44,66.7 });
        std::cout << list.ToString() << std::endl;
        list.push_back({ "test6", 67, 66.7 });
        
        std::cout << list.ToString() << std::endl;
        list.push_mid({ "test7", 78, 66.7 },8);
        std::cout << list.ToString() << std::endl;
        list.push_mid({ "test8", 87, 66.7 },5);
        while (list.Size() > 0)
        {
            list.pop_mid(3);
            std::cout << list.ToString() << std::endl;
        }

    }


