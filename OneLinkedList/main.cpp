#include <iostream>
#include "one_linked_list.h"
#include "double_linked_list.h"
#include "queue.h"
#include "stack.h"
#include "set1.h"
#include "book.h"


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
    // test1();
    // test2();
     //test3();
   // test4();
   // test5();
    //test6();
   // test7();
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
    oll::OneLinkedList<float> list;
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
        oll::OneLinkedList<Book> list;
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
          void test7()
          {
              Queue <int> q1;
              q1.push(5);
              q1.push(6);
              q1.push(7);
              q1.push(8);
              q1.push(9);
              q1.push(5);
              q1.push(5);
              while (q1.Size() > 0)
              {
                  std::cout << q1.ToString() << std::endl;
                  q1.pop();
              }
          }
          void test8()
          {
              Stack<int> s1;
              s1.push(5);
              s1.push(6);
              s1.push(7);
              s1.push(8);
              s1.push(9);
              s1.push(10);
              s1.push(11);
              while (s1.Size() > 0)
              {
                  std::cout << s1.ToString() << std::endl;
                  s1.pop();
              }
          }
          void test10()
          {
              dll::Set<Book> s1;
              Book book1 ("t1", 12, 45);
              s1.push(book1);
              book1.autor = "t2";
              s1.push(book1);
            book1.cost = 243;
              s1.push(book1);
            book1.tiraz = 74;
              s1.push(book1);
              Book book2("t1", 12, 45);
              s1.push(book2);
             


          
              
              
              
            while (s1.Size() > 0)
              {
                  std::cout << s1.ToString() << std::endl;
                  s1.pop();
              }
          }
          void test9()
          {
              dll::Set<int> s1;
              s1.push(5);
              s1.push(5);
              s1.push(7);
              s1.push(78);
              s1.push(8);
              s1.push(88);
              s1.push(99);
              while (s1.Size() > 0)
              {
                  std::cout << s1.ToString() << std::endl;
                  s1.pop();
              }
          }

      




