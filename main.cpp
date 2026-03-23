#include "stack.h"
#include "stack.cpp"
#include "iostream"
using namespace std;

//add more operations to show all stack functions made
int main()
{
    Stack s; //currently empty

    //s.peek(); //Check if stack underflow works for peek, works
    //s.pop(); //Check if stack underflow works for pop, works

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    s.pop();

    cout << "Top element: " << s.peek() << endl;

    s.display();

    return 0;
}