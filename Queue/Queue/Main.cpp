#include "Queue.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "\n========== SIMPLE QUEUE DEMO ==========" << endl;
    Queue q;
    cout << "Inserting 10, 20, 30, 40, 50..." << endl;
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.insert(50);
    q.display();
    cout << "\nFront element: " << q.frontElement() << endl;
    cout << "Back element: " << q.backElement() << endl;

    ItemType removed;
    q.remove(removed);
    cout << "\nAfter removing one element..." << endl;
    q.display();

    cout << "\n========== QUEUE REVERSAL DEMO ==========" << endl;
    queue<int> q2;
    cout << "Creating queue with: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10" << endl;
    for (int i = 1; i <= 10; i++)
    {
        q2.push(i);
    }
    QueueReversal qr;
    qr.printQueue(q2);
    cout << "\nReversing first 5 elements..." << endl;
    qr.reverseFirstK(q2, 5);
    qr.printQueue(q2);
    cout << "\nReversing first 3 elements..." << endl;
    qr.reverseFirstK(q2, 3);
    qr.printQueue(q2);
    cout << "\nProgram finished successfully!" << endl;
    return 0;
}