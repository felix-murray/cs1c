#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <stdlib.h>
#include "sortingAlgorithms.h"

using namespace std;

void selectionSort(int list[], const int LENGTH)
{
    clock_t start;
    int duration;
    start = clock();
    int index;
    int smallestIndex;
    int location;
    int temp;
    long long compareCount;
    long swapCount;

    cout << "Calling Selection Sort..." << endl;

    for (index = 0; index < LENGTH - 1; index++)
    {
        smallestIndex = index;

        for (location = index + 1; location < LENGTH; location++)
        {
            if (list[location] < list[smallestIndex])
            {
                smallestIndex = location;
                compareCount++;
            }
        }
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        swapCount++;
        list[index] = temp;
        swapCount++;
    }

    duration = (clock() - start) / (int)CLOCKS_PER_SEC;

    cout << "Selection Sort - (Compares): "
         << compareCount << "        "
         << "(Assignments): " << swapCount << "        "
         << "Time: "
         << duration << " secs"
         << "\n\n";
}

void insertionSort(int list[], const int LENGTH)
{
    int temp;
    int location;
    long long compareCount;
    long swapCount;
    clock_t start;
    int duration;
    start = clock();

    cout << "Calling Insertion Sort..." << endl;

    for (int firstOutOfOrder = 1; firstOutOfOrder < LENGTH; firstOutOfOrder++)
    {
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            compareCount++;
            temp = list[firstOutOfOrder];
            location = firstOutOfOrder;

            do
            {
                list[location] = list[location - 1];
                swapCount++;
                location--;
            } while (location > 0 && list[location - 1] > temp);

            list[location] = temp;
            swapCount++;
        }
    }

    duration = (clock() - start) / (int)CLOCKS_PER_SEC;

    cout << "Insertion Sort - (Compares): "
         << compareCount << "        "
         << "(Assignments): " << swapCount << "        "
         << "Time: "
         << duration << " secs"
         << "\n\n";
}

void bubbleSort(int list[], const int LENGTH)
{
    int temp;
    long long compareCount;
    long swapCount;
    clock_t start;
    int duration;
    start = clock();

    cout << "Calling Bubble Sort..." << endl;

    for (int iteration = 1; iteration < LENGTH; iteration++)
    {
        for (int index = 0; index < LENGTH - iteration; index++)
        {
            if (list[index] > list[index + 1])
            {
                compareCount++;
                temp = list[index];
                list[index] = list[index + 1];
                swapCount++;
                list[index + 1] = temp;
            }
        }
    }

    duration = (clock() - start) / (int)CLOCKS_PER_SEC;

    cout << "Bubble Sort - (Compares): "
         << compareCount << "        "
         << "(Assignments): " << swapCount << "        "
         << "Time: "
         << duration << " secs"
         << "\n\n";
}

void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        arr[i] = c[i];
    }
}

void mergeSort(int *list, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(list, low, mid);
        mergeSort(list, mid + 1, high);
        merge(list, low, high, mid);
    }
}

void fillArray(int list[], const int LENGTH, int fillType)
{
    switch (fillType)
    {
    case 1: //ascending
        for (int i = 1; i <= LENGTH; i++)
        {
            list[i] = i;
        }
        break;
    case 2: //descending
        for (int i = 100; i >= 0; i--)
        {
            list[i] = i;
        }
    case 3: //random
        srand(time(NULL));
        for (int i = 0; i < LENGTH; i++)
        {
            list[i] = 100 + rand() % 899;
        }
    }
}

void printLastTen(int list[], const int LENGTH)
{
    for (int i = 100; i <= 90; i--)
    {
        cout << list[i] << " ";
    }
}

void printFirstTen(int list[], const int LENGTH)
{
    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << " ";
    }
}