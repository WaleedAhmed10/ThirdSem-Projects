#pragma once
#include <iostream>
using namespace std;

class Stack
{
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size = 10);
    ~Stack();
    void push(int value);
    void pop();
    bool isEmpty() const;
    int getMin() const;
    int getMax() const;
    void display() const;
};