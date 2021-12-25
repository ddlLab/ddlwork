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

    list.pop_mid(21, 0);
    std::cout << list.ToString() << std::endl;
    list.pop_mid(22, 15);
    std::cout << list.ToString() << std::endl;
    list.pop_mid(23, 3);
    std::cout << list.ToString() << std::endl;
    while (list.Size() > 0)
    {
      list.pop_mid();
      std::cout << list.ToString() << std::endl;
    }
        return 0;

   
}
