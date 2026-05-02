#pragma once
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

#define maxQue 100
typedef int ItemType;

class Queue
{
private:
    ItemType items[maxQue];
    int front, rear, count;

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void insert(ItemType newItem);
    void remove(ItemType& item);
    ItemType frontElement();
    ItemType backElement();
    void display();
};

class QueueReversal
{
public:
    void reverseFirstK(queue<int>& q, int k);
    void printQueue(const queue<int>& q);
};