#include "stack.h"

Stack::Stack(int size)
{
    arr = new char[size];
    capacity = size;
    top = -1;
}

Stack::~Stack()
{
    delete[] arr;
}

bool Stack::isEmpty()
{
    return top == -1;
}

bool Stack::isFull()
{
    return top == capacity - 1;
}

void Stack::push(char ch)
{
    if (isFull())
    {
        return;
    }
    arr[++top] = ch;
}

char Stack::pop()
{
    if (isEmpty())
    {
        return '\0';
    }
    return arr[top--];
}