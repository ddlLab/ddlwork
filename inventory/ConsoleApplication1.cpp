#include <iostream>
#include <string>
#include <vector>
#include "iItem.h"
#include "abstract_factory.h"

using namespace std;


int main()
{
    vector<iItem*> myTest;
    myTest.push_back(AbstractFactory::Make());
    myTest.push_back(AbstractFactory::Make());
    myTest.push_back(AbstractFactory::Make());
    myTest.push_back(AbstractFactory::Make());
    for (iItem* item : myTest)
    {
        cout << item->ToString() << endl;
    }

    return 0;
}