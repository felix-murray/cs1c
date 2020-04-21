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
    system("clear");

    std::cout << "~INTEGERS~" << std::endl;

    std::cout << "Part 1 (Insert Node, Print):"
              << "\n\n";

    doublyLinkedList<int> list1;
    list1.initializeList();
    list1.insert(88);
    list1.insert(78);
    list1.insert(62);
    list1.insert(143);
    list1.insert(999);
    list1.insert(60);
    list1.print();

    std::cout << "Part 2 (Copy Constructor, Overloaded Assignment):"
              << "\n\n";

    doublyLinkedList<int> list3(list1);
    list3.print();

    doublyLinkedList<int> list2;
    list2 = list1;
    list2.print();

    std::cout << "Part 3 (Reverse Linked List):"
              << "\n\n";

    doublyLinkedList<int> list4(list1);
    list4.reverseList();
    list4.print();
    

    std::cout << "Part 4 (Delete 3rd Node, Delete Exceptions):"
              << "\n\n";
    doublyLinkedList<int> empty;

    list1.deleteNode(62);
    list2.deleteNode(62);
    //list4.deleteNode(143);

    //Exception Testing
    list2.deleteNode(1000);
    empty.deleteNode(1);

    list1.print();
    list2.print();
    //list4.print();

    std::cout << "Part 5 (Insert in Middle of List):"
              << "\n\n";
    list1.insertMiddle(1);
    list2.insertMiddle(1);
    //list4.insertMiddle(1);

    list1.print();
    list2.print();
    //list4.print();

    return 0;
}