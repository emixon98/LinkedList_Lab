//Stack Operations to implement
//push() insert element of top
//pop() remove element on top
//peek() return top element
//isEmpty() check if stack is empty
//display() print stack
//We need to handle stack underflow, use detection
//logic file
#include "stack.h"
#include <stdexcept>
#include <iostream>

Stack::Stack()
{
    top = nullptr;
}

void Stack::push(int val){
    Node* newNode = new Node{val, top};
    top = newNode;
}
//must handle stack underflow
void Stack::pop(){
    try{
        if(top == nullptr) {//empty check
            throw std::underflow_error("Stack Underflow");
     } 

    Node* tempNext = top->next;
    delete top; 
    top = tempNext;
    }
    catch(const std::underflow_error& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
//could cause undeflow as well include a statement here to handle this case since our program as
//a whole needs to handle stack underflow
int Stack::peek(){
    return top->data;
}

bool Stack::isEmpty(){
    if (top == nullptr) return true;
    else 
        return false;
}

void Stack::display(){
    Node* temp = top;
    cout << endl << "Stack elements:" << endl;
    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}