#pragma once

class Stack
{
private:
    char* arr;
    int top;
    int capacity;

public:
    Stack(int size = 100);
    ~Stack();
    void push(char x);
    char pop();
    bool isEmpty();
    bool isFull();
};