#include "BST.h"
#include <iostream>
using namespace std;

int main()
{
    TreeType<int> tree;
    bool found = false;
    int item = 25;

    tree.InsertItem(10);
    tree.InsertItem(20);
    tree.InsertItem(15);
    tree.InsertItem(5);
    tree.InsertItem(25);

    tree.RetrieveItem(item, found);

    if (found)
        cout << "Item " << item << " was found in the tree." << endl;
    else
        cout << "Item " << item << " was not found in the tree." << endl;

    return 0;
}