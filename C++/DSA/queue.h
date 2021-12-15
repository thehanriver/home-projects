#ifndef queue_H
#define queue_H
#include <iostream>

#define SIZE 5
class Queue
{
private:
    int front;
    int rear;
    int queue[SIZE];

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int element)
    {
        if (isFull())
        {
            std::cout << "Queue is full" << std::endl;
        }
        else
        {
            if (front == -1)
                front = 0;

            rear++;
            queue[rear] = element;
            std::cout << "Inserted Element: " << queue[rear] << std::endl;
        }
    }
    int dequeue()
    {
        int element;
        if (isEmpty())
        {
            std::cout << "Queue is empty" << std::endl;
            return -1;
        }
        else
        {
            element = queue[front];
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
            std::cout << "Deleted:" << element << std::endl;
            return element;
        }
    }

    void printQueue()
    {
        if (isEmpty())
            std::cout << "Queue is empty" << std::endl;
        else
        {
            std::cout << "Queue:" << std::endl;
            for (int i = front; i <= rear; i++)
            {
                std::cout << queue[i] << " " << std::endl;
            }
        }
    }
};

#endif