#include "Stack.h"
#include <iostream>
#include <climits>
using namespace std;

Stack::Stack(int size)
{
    capacity = size;
    arr = new int[capacity];
    top = -1;
}

Stack::~Stack()
{
    delete[] arr;
}

void Stack::push(int value)
{
    if (top == capacity - 1)
    {
        cout << "Stack overflow! Cannot push " << value << endl;
        return;
    }
    arr[++top] = value;
    cout << "Pushed: " << value << endl;
}

void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack underflow! Nothing to pop." << endl;
        return;
    }
    cout << "Popped: " << arr[top] << endl;
    top--;
}

bool Stack::isEmpty() const
{
    return top == -1;
}

int Stack::getMin() const
{
    if (isEmpty())
    {
        cout << "Stack is empty! Cannot find minimum." << endl;
        return -1;
    }

    int minVal = arr[0];
    for (int i = 1; i <= top; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

int Stack::getMax() const
{
    if (isEmpty())
    {
        cout << "Stack is empty! Cannot find maximum." << endl;
        return -1;
    }

    int maxVal = arr[0];
    for (int i = 1; i <= top; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

void Stack::display() const
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack (top to bottom): ";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}