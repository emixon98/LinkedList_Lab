# LinkedList_Lab
Linked List Lab for Week 7 CISC 187
## Submission Reqs
Stack.h
stack.cpp  
main.cpp

## Questions to answer in readme

### 1) Why is a linked list efficient for stack implementation?
Stacks are LIFO, which means we will typically be impacting the first element with stack operations. Considering this it is reasonable to conclude that a linked list is efficient as we already keep track of the head node, or top node in this case, allowing us to directly affect it and perform O(1) operations.
### 2) What is the time complexity of push and pop operations?
The time complexity of both should be O(1) as we are accessing the data of the top node and either deleting the data, or reassigning the data, which would be an O(1) operation.
### 3) What happens if memory is not deallocated after pop?
If memory is not deallocated after pop we have garbage on the stack, and this means that we are essentially wasting unused memory, and in this case the more operations we perform the more memory leakage we have occuring.
### 4)Compare a stack implemented with an array versus a linked list.
Since an array is not dynamic we run into problems using it, a linked list allows us to not have the need for contiguous memory. In the case of the stack, the array would have to continually allocate and deallocate memory as the stack changes, whereas with our linked list we do not have to worry about this. 