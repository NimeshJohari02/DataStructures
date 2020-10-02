# DataStructures
DSA Basic ITE1004
INTRODUCTION TO ARRAY :
Array is a container which can hold a fix number of items and these items should be of the same type. Most of the data structures make use of arrays to implement their algorithms. Following are the important terms to understand the concept of Array.
•	Element − Each item stored in an array is called an element.
•	Index − Each location of an element in an array has a numerical index, which is used to identify the element.
Basic Operations:
Following are the basic operations supported by an array.
•	Traverse − print all the array elements one by one.
•	Insertion − Adds an element at the given index.
•	Deletion − Deletes an element at the given index.
•	Search − Searches an element using the given index or by the value.
•	Update − Updates an element at the given index.

INTRODUCTION TO LINKED LIST :
Linked List is a very commonly used linear data structure which consists of group of nodes in a sequence.
Each node holds its own data and the address of the next node hence forming a chain like structure.
Linked Lists are used to create trees and graphs.
Advantages of Linked Lists:
•	They are a dynamic in nature which allocates the memory when required.
•	Insertion and deletion operations can be easily implemented.
•	Stacks and queues can be easily executed.
•	Linked List reduces the access time.
Disadvantages of Linked Lists
•	The memory is wasted as pointers require extra memory for storage.
•	No element can be accessed randomly; it has to access each node sequentially.
•	Reverse Traversing is difficult in linked list.
Applications of Linked Lists
•	Linked lists are used to implement stacks, queues, graphs, etc.
•	Linked lists let you insert elements at the beginning and end of the list.
•	In Linked Lists we don't need to know the size in advance.

 Types of Linked Lists
There are 3 different implementations of Linked List available, they are:
1.	Singly Linked List
2.	Doubly Linked List
3.	Circular Linked List

INTRODUCTION TO STACK :
Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).
Mainly the following three basic operations are performed in the stack:
•	Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
•	Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
•	Peek or Top: Returns top element of stack.
•	isEmpty: Returns true if stack is empty, else false.
Time Complexities of operations on stack
push(), pop(), isEmpty() and peek() all take O(1) time. We do not run any loop in any of these operations.

Applications of stack:
•	Balancing of symbols
•	Infix to Postfix /Prefix conversion
•	Redo-undo features at many places like editors, photoshop.

INTRODUCTION TO QUEUE :
A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). A good example of a queue is any queue of consumers for a resource where the consumer that came first is served first. The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.
•	Forward and backward feature in web browsers
