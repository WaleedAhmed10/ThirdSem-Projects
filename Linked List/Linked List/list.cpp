#include "list.h"
#include <iostream>
#include <string>
using namespace std;

template <class itemType>
list<itemType>::list()
{
    listPtr = nullptr;
}

template <class itemType>
list<itemType>::~list()
{
    nodePtr p;
    while (listPtr != nullptr)
    {
        p = listPtr;
        listPtr = listPtr->next;
        delete p;
    }
}

template <class itemType>
bool list<itemType>::emptyList()
{
    return listPtr == nullptr;
}

template <class itemType>
void list<itemType>::insertAfter(itemType val, itemType nextVal)
{
    if (emptyList()) return;
    nodePtr p = listPtr;
    while (p != nullptr && p->info != val)
    {
        p = p->next;
    }
    if (p != nullptr)
    {
        nodePtr q = new node<itemType>;
        q->info = nextVal;
        q->next = p->next;
        p->next = q;
    }
}

template <class itemType>
void list<itemType>::deleteItem(itemType val)
{
    if (emptyList()) return;
    nodePtr p = listPtr, prev = nullptr;
    if (p->info == val)
    {
        listPtr = p->next;
        delete p;
        return;
    }
    while (p != nullptr && p->info != val)
    {
        prev = p;
        p = p->next;
    }
    if (p == nullptr) return;
    prev->next = p->next;
    delete p;
}

template <class itemType>
void list<itemType>::push(itemType nextVal)
{
    nodePtr p = new node<itemType>;
    p->info = nextVal;
    p->next = listPtr;
    listPtr = p;
}

template <class itemType>
itemType list<itemType>::pop()
{
    if (emptyList())
    {
        cout << "List is empty!" << endl;
        exit(0);
    }
    nodePtr p = listPtr;
    itemType val = p->info;
    listPtr = p->next;
    delete p;
    return val;
}

template <class itemType>
void list<itemType>::display()
{
    nodePtr p = listPtr;
    while (p != nullptr)
    {
        cout << p->info << " -> ";
        p = p->next;
    }
    cout << "NULL" << endl;
}

template class list<int>;
template class list<double>;
template class list<string>;

LinkedList::LinkedList() : head(nullptr), length(0) {}

LinkedList::LinkedList(const string& str) : head(nullptr), length(0)
{
    for (char c : str)
    {
        append(c);
    }
}

LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::append(char c)
{
    Node* newNode = new Node(c);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    length++;
}

void LinkedList::print() const
{
    Node* temp = head;
    while (temp)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int LinkedList::size() const
{
    return length;
}

void LinkedList::clear()
{
    Node* temp;
    while (head)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    length = 0;
}