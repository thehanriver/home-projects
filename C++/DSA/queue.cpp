#include <iostream>
#include "queue.h"

int main()
{
    //peekfront, empty, full, enqueue, dequeue
    Queue q;
    q.isEmpty();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.printQueue();
    q.dequeue();
    q.dequeue();
    q.printQueue();
}