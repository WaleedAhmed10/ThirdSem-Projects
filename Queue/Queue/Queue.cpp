#include "Queue.h"
using namespace std;

Queue::Queue()
{
    count = 0;
    front = 0;
    rear = 0;
}

bool Queue::isEmpty()
{
    return count == 0;
}

bool Queue::isFull()
{
    return count == maxQue;
}

void Queue::insert(ItemType newItem)
{
    if (isFull())
    {
        cout << "Queue is full. Cannot insert " << newItem << endl;
        return;
    }
    items[rear] = newItem;
    rear = (rear + 1) % maxQue;
    count++;
    cout << "Inserted: " << newItem << endl;
}

void Queue::remove(ItemType& item)
{
    if (isEmpty())
    {
        cout << "Queue is empty. Nothing to remove." << endl;
        item = -1;
        return;
    }
    item = items[front];
    front = (front + 1) % maxQue;
    count--;
    cout << "Removed: " << item << endl;
}

ItemType Queue::frontElement()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return items[front];
}

ItemType Queue::backElement()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return -1;
    }
    int lastIndex = (rear - 1 + maxQue) % maxQue;
    return items[lastIndex];
}

void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue (front to rear): ";
    for (int i = 0; i < count; i++)
    {
        int index = (front + i) % maxQue;
        cout << items[index] << " ";
    }
    cout << endl;
}

void QueueReversal::reverseFirstK(queue<int>& q, int k)
{
    if (q.empty() || k <= 0 || k > (int)q.size())
    {
        cout << "Invalid value of k!" << endl;
        return;
    }

    stack<int> s;

    for (int i = 0; i < k; ++i)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    int size = q.size();
    for (int i = 0; i < size - k; ++i)
    {
        q.push(q.front());
        q.pop();
    }
}

void QueueReversal::printQueue(const queue<int>& q)
{
    queue<int> temp = q;
    if (temp.empty())
    {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue: ";
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}