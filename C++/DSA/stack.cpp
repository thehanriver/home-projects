#include <iostream>
#include <stdlib.h>

#define MAX 10

//Stack with size of 10
struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;
int size = 0;
//Create an empty stack
void createStack(st *s)
{
    s->top = -1;
}

//check if stack is full
bool isFull(st *s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

//check if stack is empty
bool isEmpty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

//push
void push(st *s, int num)
{
    if (isFull(s))
    {
        std::cout << "Stack is full" << std::endl;
    }
    else
    {
        s->top++;
        s->items[s->top] = num;
        size++;
    }
}

//pop
void pop(st *s)
{
    if (isEmpty(s))
    {
        std::cout << "Stack is empty" << std::endl;
    }
    else
    {
        std::cout << "Popped = " << s->items[s->top] << std::endl;
        s->top--;
        size--;
    }
}

void printStack(st *s)
{
    std::cout << "stack:";
    for (int i = 0; i < size; i++)
    {

        std::cout << s->items[i] << " ";
    }
    std::cout << std::endl;
}
//driver code
int main()
{

    st *s;
    s = (st *)malloc(sizeof(st));
    //push,pop,create
    createStack(s);
    pop(s);
    for (int i = 1; i < 11; i++)
    {
        push(s, i);
    }
    printStack(s);
    push(s, 11);
    printStack(s);
    pop(s);
}