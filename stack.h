//Stack Operations to implement
//push() insert element of top
//pop() remove element on top
//peek() return top element
//isEmpty() check if stack is empty
//display() print stack
//declaration file
#ifndef STACK_H
#define STACK_H
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Stack
{
private:
    Node* top;

public:
    Stack();

    void push(int value);
    void pop();
    int peek();
    bool isEmpty();
    void display();
};

#endif