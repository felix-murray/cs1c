#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

#include <iostream>
#include <cassert>

using namespace std;

template <class Type>
struct node
{
    Type info;
    node<Type> *next;
    node<Type> *back;
};

template <class Type>
class doublyLinkedList
{
public:
    const doublyLinkedList<Type> &operator=(const doublyLinkedList<Type> &);

    void initializeList();
    bool isEmptyList() const;
    void destroy();

    void print() const;
    void reversePrint() const;
    void reverseList() const;

    int length() const;
    Type front() const;
    Type back() const;

    bool search(const Type &searchItem) const;
    void insert(const Type &insertItem);
    void insertMiddle(const Type &insertItem);
    void deleteNode(const Type &deleteItem);

    doublyLinkedList();
    doublyLinkedList(const doublyLinkedList<Type> &otherList);
    ~doublyLinkedList();

protected:
    int count;
    node<Type> *first;
    node<Type> *last;

private:
    void copyList(const doublyLinkedList<Type> &otherList);
};

template <class Type>
const doublyLinkedList<Type> &doublyLinkedList<Type>::operator=(const doublyLinkedList<Type> &otherList)
{
    if (this != &otherList)
    {
        node<Type> *newNode;
        node<Type> *current;

        if (first != nullptr)
        {
            node<Type> *temp;

            while (first != nullptr)
            {
                temp = first;
                first = first->next;
                delete temp;
            }
            last = nullptr;
            count = 0;
        }

        if (otherList.first == nullptr)
        {
            first = nullptr;
            last = nullptr;
            count = 0;
        }
        else
        {
            current = otherList.first;
            count = otherList.count;

            first = new node<Type>;
            first->info = current->info;
            //this might break idk
            first->next = nullptr;

            last = first;

            current = current->next;

            while (current != nullptr)
            {
                newNode = new node<Type>;
                newNode->info = current->info;
                newNode->next = nullptr;

                last->next = newNode;
                last = newNode;

                current = current->next;
            }
        }
    }
    return *this;
}

template <class Type>
doublyLinkedList<Type>::~doublyLinkedList()
{
    node<Type> *temp;

    while (first != nullptr)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
    last = nullptr;
    count = 0;
}

template <class Type>
doublyLinkedList<Type>::doublyLinkedList(const doublyLinkedList<Type> &otherList)
{
    first = nullptr;

    node<Type> *newNode;
    node<Type> *current;

    if (first != nullptr)
    {
        node<Type> *temp;

        while (first != nullptr)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = nullptr;
        count = 0;
    }

    if (otherList.first == nullptr)
    {
        first = nullptr;
        last = nullptr;
        count = 0;
    }
    else
    {
        current = otherList.first;
        count = otherList.count;

        first = new node<Type>;
        first->info = current->info;
        first->next = nullptr;

        last = first;

        current = current->next;

        while (current != nullptr)
        {
            newNode = new node<Type>;
            newNode->info = current->info;
            newNode->next = nullptr;

            last->next = newNode;
            last = newNode;

            current = current->next;
        }
    }
}

template <class Type>
doublyLinkedList<Type>::doublyLinkedList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

template <class Type>
bool doublyLinkedList<Type>::isEmptyList() const
{
    return (first == nullptr);
}

template <class Type>
void doublyLinkedList<Type>::destroy()
{
    node<Type> *temp;

    while (first != nullptr)
    {
        temp = first;
        first = first->next;
        delete temp;
    }

    last = nullptr;
    count = 0;
}

template <class Type>
void doublyLinkedList<Type>::initializeList()
{
    destroy();
}

template <class Type>
int doublyLinkedList<Type>::length() const
{
    return count;
}

template <class Type>
void doublyLinkedList<Type>::print() const
{
    node<Type> *current;

    current = first;

    while (current != nullptr)
    {
        cout << current->info << "  ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <class Type>
void doublyLinkedList<Type>::reversePrint() const
{
    node<Type> *current;

    current = last;

    while (current != nullptr)
    {
        cout << current->info << " ";
        current = current->back;
    }
    std::cout << std::endl;
}

template <class Type>
void doublyLinkedList<Type>::reverseList() const
{
    node<Type> *left = first;
    node<Type> *right = first;

    while (right->next != nullptr)
    {
        right = right->next;
    }

    while (left != right && left->back != right)
    {
        swap(left->info, right->info);
        left = left->next;
        right = right->back;
    }
}

template <class Type>
bool doublyLinkedList<Type>::
    search(const Type &searchItem) const
{
    bool found = false;
    node<Type> *current;

    current = first;

    while (current != nullptr && !found)
        if (current->info >= searchItem)
            found = true;
        else
            current = current->next;

    if (found)
        found = (current->info == searchItem);

    return found;
}

template <class Type>
Type doublyLinkedList<Type>::front() const
{
    assert(first != nullptr);

    return first->info;
}

template <class Type>
Type doublyLinkedList<Type>::back() const
{
    assert(last != nullptr);

    return last->info;
}

template <class Type>
void doublyLinkedList<Type>::insert(const Type &insertItem)
{
    node<Type> *current;
    node<Type> *trailCurrent;
    node<Type> *newNode;
    bool found;

    newNode = new node<Type>;
    newNode->info = insertItem;
    newNode->next = nullptr;
    newNode->back = nullptr;

    if (first == nullptr)
    {
        first = newNode;
        last = newNode;
        count++;
    }
    else
    {
        found = false;
        current = first;

        while (current != nullptr && !found)
        {
            trailCurrent = current;
            current = current->next;
        }

        if (current == first)
        {
            first->back = newNode;
            newNode->next = first;
            first = newNode;
            count++;
        }
        else
        {
            if (current != nullptr)
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                newNode->next = current;
                current->back = newNode;
            }
            else
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                last = newNode;
            }

            count++;
        }
    }
}

template <class Type>
void doublyLinkedList<Type>::insertMiddle(const Type &insertItem)
{
    node<Type> *temp = nullptr;
    node<Type> *current = first;
    node<Type> *newNode = (node<Type> *)malloc(sizeof(node<Type>));
    newNode->info = insertItem;

    int mid = (count % 2 == 0) ? (count / 2) : ((count + 1) / 2);

    for (int i = 1; i < mid; i++)
    {
        current = current->next;
    }

    temp = current->next;
    temp->back = newNode;
    current->next = newNode;
    newNode->back = current;
    newNode->next = temp;
    temp->back = newNode;
}

template <class Type>
void doublyLinkedList<Type>::deleteNode(const Type &deleteItem)
{
    node<Type> *current;
    node<Type> *trailCurrent;
    bool found;

    if (first == nullptr)
    {
        std::cout << "Cannot delete from an empty list."
                  << std::endl;
    }
    else
    {
        if (first->info == deleteItem)
        {
            current = first;
            first = first->next;
            count--;
            if (first == nullptr)
            {
                last = nullptr;
            }

            delete current;
        }
        else
        {
            found = false;
            trailCurrent = first;
            current = first->next;

            while (current != nullptr && !found)
            {
                if (current->info != deleteItem)
                {
                    trailCurrent = current;
                    current = current->next;
                }
                else
                {
                    found = true;
                }
            }
            if (found)
            {
                trailCurrent->next = current->next;
                count--;
                if (last == current)
                {
                    last = trailCurrent;
                }
                delete current;
            }
            else
                std::cout << "The item to be deleted is not in "
                          << "the list." << std::endl;
        }
    }
}

#endif