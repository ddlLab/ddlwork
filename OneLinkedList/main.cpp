#include <iostream>
#include "one_linked_list.h"

int main()
{
    OneLinkedList list;
    std::cout << list.ToString() << std::endl;
    list.push_front(10);
        std::cout << list.ToString() << std::endl;
        list.push_front(11);
        std::cout << list.ToString() << std::endl;
        list.push_front(12);
        std::cout << list.ToString() << std::endl;
        list.push_front(12);
        std::cout << list.ToString() << std::endl;
        list.push_front(13);
        std::cout << list.ToString() << std::endl;
        list.push_front(14);
        std::cout << list.ToString() << std::endl;
        list.push_front(15);
        return 0;

















   
}