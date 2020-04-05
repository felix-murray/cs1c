#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>

template <class Type>
class queue
{
public:
    /*********  Queue Operations  **********/
    bool isEmpty() const;
    bool isFull() const;
    int currentSize() const;
    void initializeQueue();
    Type front() const;
    Type back() const;
    void enqueue(const Type &queueElement);
    void dequeue();
    void printQueue();

    /*********  Constructors  **********/
    queue();
    queue(int initSize);
    queue(const queue<Type> &otherQueue);
    ~queue();

private:
    int maxSize;
    int size;
    int begin;
    int end;
    Type *list;
};

template <class Type>
bool queue<Type>::isEmpty() const
{
    return (size == 0);
}

template <class Type>
bool queue<Type>::isFull() const
{
    return (size == maxSize);
}

template <class Type>
int queue<Type>::currentSize() const
{
    return size;
}

template <class Type>
void queue<Type>::initializeQueue()
{
    begin = 0;
    end = maxSize - 1;
    size = 0;
}

template <class Type>
Type queue<Type>::front() const
{
    assert(!isEmpty());
    return list[begin];
}

template <class Type>
Type queue<Type>::back() const
{
    assert(!isEmpty());
    return list[end];
}

template <class Type>
void queue<Type>::enqueue(const Type &newElement)
{
    try
    {
        if (isFull())
        {
            throw size;
        }
        end = (end + 1) % maxSize;
        size++;
        list[end] = newElement;
    }
    catch (int exceptFull)
    {
        std::cout << "EXCEPTION: Cannot add to full queue. Size is currently: " << exceptFull << " of max size " << maxSize << std::endl;
    }
}

template <class Type>
void queue<Type>::dequeue()
{
    try
    {
        if (isEmpty())
        {
            throw size;
        }
        size--;
        begin = (begin + 1) % maxSize;
    }
    catch (int exceptEmpty)
    {
        std::cout << "EXCEPTION: Cannot remove from empty queue. Size is currently: " << exceptEmpty << std::endl;
    }
}

template <class Type>
void queue<Type>::printQueue()
{
    queue<Type> temp(*this);
    while (!temp.isEmpty())
    {
        std::cout << temp.front() << " ";
        temp.dequeue();
    }
    std::cout << std::endl;
}

template <class Type>
queue<Type>::queue()
{
    maxSize = 10;
    begin = 0;
    end = maxSize - 1;
    size = 0;
    list = new Type[maxSize];
}

template <class Type>
queue<Type>::queue(int initSize)
{
    maxSize = initSize;
    begin = 0;
    end = maxSize - 1;
    size = 0;
    list = new Type[maxSize];
}

template <class Type>
queue<Type>::~queue()
{
    delete[] list;
}

template <class Type>
queue<Type>::queue(const queue<Type> &otherQueue)
{
    list = NULL;

    delete[] list;

    maxSize = otherQueue.maxSize;
    size = otherQueue.size;
    begin = otherQueue.begin;
    end = otherQueue.end;

    list = new Type[maxSize];

    for (int i = 0; i < otherQueue.maxSize; i++)
    {
        list[i] = otherQueue.list[i];
    }
}

#endif
