# LinkedList_Lab
Linked List Lab for Week 7 CISC 187
## Submission Reqs
Stack.h
stack.cpp  
main.cpp

## Questions to answer in readme

### 1) Why is a linked list efficient for stack implementation?
Stacks are LIFO, which means we will typically be impacting the first element with stack operations. A linked list is efficient in this situaton because we keep track of the top/head node, allowing insertion an deletion with our push and pop operations without needing to shift elements. And since linked list do no require contiguous memory like arrays do we have more flexibility with our memory while maintaining a constant time complexity.
### 2) What is the time complexity of push and pop operations?
Both push and pop have a time complexity of O(1). Both only involve updating pointers and therefore do not traverse the structure like an array would.
### 3) What happens if memory is not deallocated after pop?
If memory is not deallocated after pop we create a memory leak. This means our program has created and lost access to allocated memory no longer in use. An array allocates contiguous memory and therfore has a "section" of memory allocated to itself, linked list do not follow this rule and will run into memory leaks. Over time, repeating this process can lead to a significant amount of memory leakage that causes performance to degrade and potentially crash.
### 4)Compare a stack implemented with an array versus a linked list.
An array uses contiguous memory and typically will have a fixed/declared size, this can lead to overflow if we exceed that size. On the other hand, resizing our array, dynamic array, can be a costly operation if we consider reallocation and copying of our pre-resized array. A linked list stack always dynamically allocates memory for each new element/node, allowing growth and shrinkage without contiguous memory. However, linked list may require extra memory usage for pointer storage, and may have worse performance in that regard.
