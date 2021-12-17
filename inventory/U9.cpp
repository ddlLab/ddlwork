#include <iostream>
#include <vector>
#include <algorithm>
#include "helm.h"
#include "chest.h"
#include "weapon.h"
#include "boots.h"
#include "shield.h"
#include "abstract_factory.h"

using namespace std;

int main()
{
    std::vector<iItem*>  inventory;
    inventory.push_back(AbstractFactory::Make() );
    inventory.push_back(AbstractFactory::Make() );
    inventory.push_back(AbstractFactory::Make() );
    inventory.push_back(AbstractFactory::Make() );
    inventory.push_back(AbstractFactory::Make() );

    for (iItem* item : inventory)
    {
        cout << item->ToString() << endl;
    }

    cout << "----Test fetch----\n";

    sort(inventory.rbegin(), inventory.rend(), [](iItem* item1, iItem* item2)
        {
            return item1->Type() > item2->Type();
        });

    auto example = find_if(inventory.crbegin(), inventory.crend(), [](iItem* item1)
        {
            return item1->Type() > iItem::eType::BOOTS;
        });

    if (example != inventory.crend())
    {
        cout << "You has item:" << (*example)->ToString();
    }

    for (iItem* item : inventory)
    {
        cout << item->ToString() << endl;
    }
}
