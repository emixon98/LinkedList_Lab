#include "stack.h"
#include "iostream"
#include <stdexcept>

//add more operations to show all stack functions made
int main()
{
    Stack s; //currently empty

    //initial underflow test
    //s.peek(); //Check if stack underflow works for peek, works
    //s.pop(); //Check if stack underflow works for pop, works
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);

        s.display();

        s.pop();

        std::cout << "Top element: " << s.peek() << endl;

        s.display();

        //proof of underflow handling
        try{
            while(!s.isEmpty()){
                s.pop();
            }
                s.peek(); //last peek will cause underflow error
        }
        catch(const std::underflow_error& err){
            std::cout << err.what() << endl << endl;
        }

    return 0;
}