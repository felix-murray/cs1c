#include <iostream>
#include "queue.h"

/*
- Run Valgrind to check for memory leaks
*/

int main()
{
    /*********  Queue 1 (Type Integer)  **********/
    queue<int> queue1;

    queue1.initializeQueue();

    system("clear");
    std::cout << "*********  Queue 1 (Type Integer)  **********" << std::endl;
    std::cout << "Attempting to delete from empty queue (should failsafe)..." << std::endl;
    queue1.dequeue();

    queue1.enqueue(5);
    queue1.enqueue(4);
    queue1.enqueue(44);
    queue1.enqueue(36);
    queue1.enqueue(2);
    queue1.enqueue(500);

    std::cout << "\nPrinting result of 6 enqueues..." << std::endl;
    queue1.printQueue();

    queue1.dequeue();
    queue1.dequeue();
    queue1.dequeue();
    queue1.dequeue();

    std::cout << "\nPrinting result of 4 dequeues..." << std::endl;
    queue1.printQueue();

    queue1.enqueue(88);
    queue1.enqueue(16);
    queue1.enqueue(9);
    queue1.enqueue(24);
    queue1.enqueue(3);

    std::cout << "\nPrinting result of 5 enqueues..." << std::endl;
    queue1.printQueue();

    queue1.dequeue();
    queue1.dequeue();
    queue1.dequeue();

    std::cout << "\nPrinting result of 3 dequeues..." << std::endl;
    queue1.printQueue();

    std::cout << "\nFront of Queue is now..." << std::endl;
    std::cout << queue1.front() << std::endl;

    queue1.enqueue(7);
    queue1.enqueue(45);
    queue1.enqueue(98);
    queue1.enqueue(36);
    queue1.enqueue(2);
    queue1.enqueue(5);

    std::cout << "\nPrinting result of 6 enqueues (making queue full to test isFull)...";
    std::cout << std::endl;
    queue1.printQueue();

    std::cout << "\nAttempting to add to full queue (should failsafe)...";
    std::cout << std::endl;
    queue1.enqueue(1);

    /*********  Queue 2 (Type Double)  **********/
    queue<double> queue2;
    std::cout << "*********  Queue 2 (Type Double)  **********" << std::endl;
    std::cout << "\nAttempting to delete from empty queue (should failsafe)..." << std::endl;
    queue2.dequeue();

    queue2.enqueue(5.1);
    queue2.enqueue(4.7);
    queue2.enqueue(44.4);
    queue2.enqueue(36.0);
    queue2.enqueue(2.4);
    queue2.enqueue(500.44);

    std::cout << "\nPrinting result of 6 enqueues..." << std::endl;
    queue2.printQueue();

    queue2.dequeue();
    queue2.dequeue();
    queue2.dequeue();
    queue2.dequeue();

    std::cout << "\nPrinting result of 4 dequeues..." << std::endl;
    queue2.printQueue();

    queue2.enqueue(88.79);
    queue2.enqueue(16.12);
    queue2.enqueue(9.5);
    queue2.enqueue(24.0);
    queue2.enqueue(3.33);

    std::cout << "\nPrinting result of 5 enqueues..." << std::endl;
    queue2.printQueue();

    queue2.dequeue();
    queue2.dequeue();
    queue2.dequeue();

    std::cout << "\nPrinting result of 3 dequeues..." << std::endl;
    queue2.printQueue();

    std::cout << "\nFront of Queue is now..." << std::endl;
    std::cout << queue2.front() << std::endl;

    queue2.enqueue(7);
    queue2.enqueue(45);
    queue2.enqueue(98);
    queue2.enqueue(36);
    queue2.enqueue(2);
    queue2.enqueue(5);

    std::cout << "\nPrinting result of 6 enqueues (making queue full to test isFull)...";
    std::cout << std::endl;
    queue2.printQueue();

    std::cout << "\nAttempting to add to full queue (should failsafe)...";
    std::cout << std::endl;
    queue2.enqueue(1);

    std::cout << std::endl;

    /*********  Queue 3 (Type String)  **********/
    queue<std::string> queue3;
    std::cout << "*********  Queue 3 (Type String)  **********" << std::endl;
    std::cout << "\nAttempting to delete from empty queue (should failsafe)..." << std::endl;
    queue3.dequeue();

    queue3.enqueue("apple");
    queue3.enqueue("orange");
    queue3.enqueue("pear");
    queue3.enqueue("banana");
    queue3.enqueue("passion fruit");
    queue3.enqueue("pineapple");

    std::cout << "\nPrinting result of 6 enqueues..." << std::endl;
    queue3.printQueue();

    queue3.dequeue();
    queue3.dequeue();
    queue3.dequeue();
    queue3.dequeue();

    std::cout << "\nPrinting result of 4 dequeues..." << std::endl;
    queue3.printQueue();

    queue3.enqueue("grape");
    queue3.enqueue("durian");
    queue3.enqueue("mango");
    queue3.enqueue("strawberry");
    queue3.enqueue("dragon fruit");

    std::cout << "\nPrinting result of 5 enqueues..." << std::endl;
    queue3.printQueue();

    queue3.dequeue();
    queue3.dequeue();
    queue3.dequeue();

    std::cout << "\nPrinting result of 3 dequeues..." << std::endl;
    queue3.printQueue();

    std::cout << "\nFront of Queue is now..." << std::endl;
    std::cout << queue3.front() << std::endl;

    queue3.enqueue("blueberry");
    queue3.enqueue("raspberry");
    queue3.enqueue("blackberry");
    queue3.enqueue("bumbleberry");
    queue3.enqueue("lemon");
    queue3.enqueue("lime");

    std::cout << "\nPrinting result of 6 enqueues (making queue full to test isFull)...";
    std::cout << std::endl;
    queue3.printQueue();

    std::cout << "\nAttempting to add to full queue (should failsafe)...";
    std::cout << std::endl;
    queue3.enqueue("peach");

    std::cout << std::endl;

    return 0;
}