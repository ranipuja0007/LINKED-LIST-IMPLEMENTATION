# LINKED-LIST-IMPLEMENTATION

COMPANY:CODTECH IT SOLUTIONS

NAME:PUJA RANI

INTERN ID::CT04DN1860

DOMAIN:C LANGUAGE

DURATION:4 WEEKS

MENTOR:NEELA SANTOSH

This C program implements a basic singly linked list with functions to insert nodes at both the beginning and the end of the list, delete nodes by value, and traverse the list to display its contents. The program demonstrates dynamic memory management, pointer manipulation, and fundamental linked list operations. Below is a detailed explanation of the code, broken down into various sections:

1. Data Structure:
The program starts by defining a structure Node that represents each element in the linked list. The Node structure contains two components:

data: An integer that stores the actual value of the node.

next: A pointer to the next node in the list.

This structure is fundamental to the linked list, as it allows each node to be linked to the next, creating a chain-like structure.

2. createNode Function:
The createNode function is responsible for creating a new node and assigning it the given data. It first dynamically allocates memory for the new node using malloc, which ensures that the node exists in the heap memory rather than the stack. The function initializes the data field with the given value and sets the next pointer to NULL, indicating that the node is not yet linked to any other node. If memory allocation fails (i.e., malloc returns NULL), the program prints an error message and exits using exit(EXIT_FAILURE) to prevent further execution.

3. insertAtEnd Function:
This function inserts a new node at the end of the linked list. The function first creates a new node using the createNode function. If the list is empty (i.e., the head pointer is NULL), the new node becomes the first node in the list, and the head pointer is updated to point to this new node. If the list is not empty, the function traverses the list to find the last node (i.e., the node where next is NULL) and appends the new node by setting the next pointer of the last node to point to the new node.

4. insertAtBeginning Function:
The insertAtBeginning function inserts a new node at the beginning of the linked list. It creates a new node and sets the next pointer of the new node to the current head of the list. Then, it updates the head pointer to point to the new node. This operation effectively shifts all existing nodes one position further down the list.

5. deleteByValue Function:
This function is responsible for deleting the first occurrence of a node with a given value. It first checks if the list is empty by checking if the head is NULL. If the list is empty, it prints a message indicating that there is nothing to delete. If the list is not empty, it checks whether the value to be deleted is present in the first node (the head node). If so, it updates the head pointer to point to the second node and frees the memory of the deleted node.

If the value is not found in the head node, the function traverses the list to search for the node containing the given value. It keeps track of the previous node (prev) so that when the target node is found, it can be safely unlinked by updating the next pointer of the previous node to skip the node to be deleted. Finally, the target node's memory is freed.

6. traverse Function:
The traverse function is used to display the contents of the linked list. It starts from the head node and iterates through the list, printing the data of each node until it reaches the end (i.e., when the next pointer is NULL). If the list is empty (i.e., the head is NULL), it prints a message indicating that the list is empty.

7. Main Function:
The main function demonstrates the usage of the linked list operations. It first initializes an empty linked list by setting the head pointer to NULL. Then, it performs a series of operations:

It inserts nodes with values 10, 20, and 30 at the end of the list and inserts a node with value 5 at the beginning.

It displays the list after the insertions using the traverse function.

It deletes a node with value 20 using the deleteByValue function.

Finally, it displays the list again after the deletion.

8. Error Handling:
The program handles errors such as memory allocation failure and attempts to delete a non-existent value by printing appropriate error messages to the user. If an operation cannot be completed (like deleting from an empty list or deleting a non-existent value), the program notifies the user and proceeds without crashing.

9. Dynamic Memory Management:
One of the key aspects of this program is the use of dynamic memory allocation with malloc to create new nodes and the use of free to release memory when nodes are deleted. This ensures efficient memory usage, especially in cases where the list may grow or shrink during the program's execution.

Conclusion:
This C program effectively demonstrates the basic operations of a singly linked list, which is a fundamental data structure used in many computer science applications. The program covers inserting nodes at both ends, deleting nodes by value, and traversing the list. Through this exercise, one learns the importance of pointer manipulation, memory management, and efficient handling of data in dynamic structures like linked lists. The implementation is clear and well-structured, making it a useful example for learning about linked lists in C.




