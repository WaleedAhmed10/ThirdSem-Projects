#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
    Stack s(5);

    cout << "=== Pushing elements ===" << endl;
    s.push(10);
    s.push(20);
    s.push(5);
    s.push(30);
    s.push(15);

    cout << "\n=== Stack after pushes ===" << endl;
    s.display();

    cout << "\n=== Min and Max ===" << endl;
    cout << "Minimum value: " << s.getMin() << endl;
    cout << "Maximum value: " << s.getMax() << endl;

    cout << "\n=== Popping ===" << endl;
    s.pop();

    cout << "\n=== Stack after pop ===" << endl;
    s.display();

    cout << "\n=== Empty Check ===" << endl;
    if (s.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}