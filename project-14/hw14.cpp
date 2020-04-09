/*
Create a doubly linked list with at least five nodes using a 
class template with template methods

Test the copy constructor and the copy assignment 
operator

Read the linked list from part 1 and create another linked 
list reversing the logical order of the first linked list

Delete the third node of each list. (Also try to (1) delete a 
non-existent node and (2) delete from an empty list)

Add a node in the middle of each linked list
Repeat steps 1-4 using doubles

Run valgrind to test for memory leak
*/

#include "doublylinkedlist.h"

int main()
{
    doublyLinkedList<int> list1;

    std::cout << "Part 1 (Insert Node, Delete Node, Print, Reverse Print):" << "\n\n";
    list1.initializeList();
    list1.insert(88);
    list1.insert(78);
    list1.insert(62);
    list1.insert(143);
    list1.insert(999);
    list1.insert(60);
    list1.print();
    
    std::cout << "Removing 143..." << "\n\n";
    list1.deleteNode(60);
    list1.print();

    doublyLinkedList<int> list2;
    list2 = list1;
    list2.print();

    //test copy constructor
    doublyLinkedList<int> list3(list1);
    list3.print();


    return 0;
}