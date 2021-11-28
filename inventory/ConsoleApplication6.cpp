// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class A
{
public:
    A() { cout << "created A" << std::endl; }
    virtual ~A() { cout << "destroyed A" << std::endl; }

    //pure virtual function
    virtual void f1() = 0;
    virtual void f2() =0;
    virtual void f3() =0;
    virtual void f4() =0;
};

class B : public A
{
public:
    B() { cout << "created B" << std::endl; }
    virtual ~B() { cout << "destroyed B" << std::endl; }

    virtual void f1() override { cout << "B::f1()"<<endl; };
    virtual void f2() override { cout << "B::f2()" << endl; };

};

class C : virtual public B
{
public:
    C() { cout << "created C" << std::endl; }
    virtual ~C() { cout << "destroyed C" << std::endl; }

    virtual void f3() override { cout << "C::f3()" << endl; };
    virtual void f4() override { cout << "C::f4()" << endl; };

};

class D : virtual public B
{
public:
    D() { cout << "created D" << std::endl; }
    virtual ~D() { cout << "destroyed D" << std::endl; }

    virtual void f1() override { B::f1(); cout << "D::f1()" << endl; };
    virtual void f3() override { cout << "D::f3()" << endl; };
    virtual void f4() override { cout << "D::f4()" << endl; };

};

class K
{
public:
    K() { cout << "created K" << std::endl; }
    virtual ~K() { cout << "destroyed K" << std::endl; }
};

class H : public virtual K
{
public:
    H() { cout << "created H" << std::endl; }
    virtual ~H() { cout << "destroyed H" << std::endl; }
};

class CD : public C, public D, public H
{
public:
    CD() { cout << "created CD" << std::endl; }
    virtual ~CD() { cout << "destroyed CD" << std::endl; }

    virtual void f1() override { cout << "CD::"; C::f1(); };
    virtual void f2() override { cout << "CD::"; C::f2(); };
    virtual void f3() override { cout << "CD::"; D::f3(); };
    virtual void f4() override { cout << "CD::"; D::f4(); };

};

int main()
{
    A* test = new CD();//new C();
    test->f1();
    test->f2();
    test->f3();
    test->f4();
    delete test;
    cout << "--------------" << endl;
    A* test1 = new D();
    test1->f1();
    test1->f2();
    test1->f3();
    test1->f4();
    delete test1;
    return 0;
}

