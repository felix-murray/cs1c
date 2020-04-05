#include <iostream>
#include <cassert>
#include "queue.h"

int main()
{ 
    int queueSize;
    
    system("clear");
    std::cout << "Enter Queue Size (cannot be negative): ";

    //Test assert in relation to queue size being non-negative
    std::cin >> queueSize;
    bool isPositive = (queueSize > 0);
    assert(("ERROR: Queue size cannot be negative.", isPositive));

    std::cout << std::endl;

    queue<int> queue1(queueSize);
    queue1.initializeQueue();
    
    //Test removal from empty queue exception
    std::cout << "Attempting to delete from empty queue (should throw exception)..." << std::endl;
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

    //Test addition to full queue exception
    std::cout << "\nAttempting to add to full queue (should throw exception)...";
    std::cout << std::endl;
    queue1.enqueue(1);

    return 0;
}
