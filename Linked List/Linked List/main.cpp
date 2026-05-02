#include "list.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "========== TASK 1: Generic Linked List ==========" << endl;
    list<int> myList;

    myList.push(10);
    myList.push(20);
    myList.push(30);
    cout << "List after pushing: ";
    myList.display();

    myList.insertAfter(20, 25);
    cout << "List after inserting 25 after 20: ";
    myList.display();

    myList.deleteItem(20);
    cout << "List after deleting 20: ";
    myList.display();

    cout << "Popped item: " << myList.pop() << endl;
    cout << "List after popping: ";
    myList.display();

    cout << "\n========== TASK 2: String Linked List ==========" << endl;
    LinkedList str1;
    cout << "Appending characters: ";
    str1.append('W');
    str1.append('a');
    str1.append('l');
    str1.append('e');
    str1.append('e');
    str1.append('d');
    str1.print();
    cout << "Size of the string: " << str1.size() << endl;

    LinkedList str2("Ahmed");
    cout << "Printing str2: ";
    str2.print();
    cout << "Size of the string: " << str2.size() << endl;

    return 0;
}