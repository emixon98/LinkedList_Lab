//Stack Operations
//push() insert element on top
//pop() remove element on top
//peek() return top element
//isEmpty() check if stack is empty
//display() print stack

#include "stack.h"
#include <stdexcept>
#include <iostream>
using namespace std;

Stack::Stack()
{
    top = nullptr;
}

void Stack::push(int val){
    //initialize a new node with a pointer to the current top node, and then make the new top
    Node* newNode = new Node{val, top};
    top = newNode;
}
//must handle stack underflow
void Stack::pop(){
    if(top == nullptr) {//empty check
            throw std::underflow_error("Stack Underflow");
     } 
    //I want to store the next val of current top since i'll be deleting the current top and dont want to lose it 
    Node* tempNext = top->next;
    delete top; 
    top = tempNext;
}

//could cause undeflow as well include a statement here to handle this case since our program as
//a whole needs to handle stack underflow
int Stack::peek(){
    if(top == nullptr) {//empty check
        throw std::underflow_error("Stack Underflow");
    } 
    return top->data;
}

bool Stack::isEmpty(){
    if (top == nullptr) return true; //empty case
    else 
        return false;
}

void Stack::display(){
    Node* temp = top;
    cout << endl << "Stack elements:" << endl;
    //basic iteration until reached end of stack/nullptr
    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}