#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class itemType>
struct node
{
    itemType info;
    struct node* next;
};

template <class itemType>
class list
{
private:
    typedef node<itemType>* nodePtr;
    nodePtr listPtr;

public:
    list();
    ~list();
    bool emptyList();
    void insertAfter(itemType, itemType);
    void deleteItem(itemType);
    void push(itemType);
    itemType pop();
    void display();
};

class LinkedList
{
private:
    struct Node
    {
        char data;
        Node* next;
        Node(char c) : data(c), next(nullptr) {}
    };
    Node* head;
    int length;

public:
    LinkedList();
    LinkedList(const string& str);
    ~LinkedList();
    void append(char c);
    void print() const;
    int size() const;
    void clear();
};