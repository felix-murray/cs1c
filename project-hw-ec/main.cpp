/*

Sort three arrays (list1, list 2, and list3) five times.

list1 = {1, 2, 3, ... ,98, 99, 100}
list2 = {100, 99, 98,..., 3, 2, 1}
list3= {100, 5, 92,..., 98, 2, 88}

Sort ascending (bubble, insertion, selection, quick(use a random number between 1 and 100 as the pivot), merge) the arrays where 

1.list1 is initially in ascending orde
2.list2 is initially in descending order
3.list3 is initially in random order

a.Print out the first and last 10 array entries of list1, list2, and list3 before AND after sorting.  
b.Output the number of comparisons and item assignments made duringe ach sort. There shouldbe 15 entries.
c.Output the execution time in nanoseconds for each sort. There shouldbe 15 entries.

Use the command script to capture your interaction compiling andrunning the program, including all operations, as shown below

*/

#include <iostream>
#include "sortingAlgorithms.h"

using namespace std;

int main()
{
  const int LENGTH = 100;

  int ascen[LENGTH];
  int descen[LENGTH];
  int rand[LENGTH];

  //Initial Fill
  fillArray(ascen, LENGTH, 1);
  fillArray(descen, LENGTH, 2);
  fillArray(rand, LENGTH, 3);

  system("clear");

  //Ascending Array

  //Before Insertion Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  insertionSort(ascen, LENGTH);

  //After Insertion Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  //Reset Array
  fillArray(ascen, LENGTH, 1);

  //Before Selection Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  selectionSort(ascen, LENGTH);

  //After Selection Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  //Reset Array
  fillArray(ascen, LENGTH, 1);

  //Before Bubble Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  bubbleSort(ascen, LENGTH);

  //After Bubble Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  //Reset Array
  fillArray(ascen, LENGTH, 1);

  //QUICK SORT HERE

  //Reset Array
  fillArray(ascen, LENGTH, 1);

  //Before Merge Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  mergeSort(ascen, 0, LENGTH - 1);

  //After Merge Sort
  printFirstTen(ascen, LENGTH);
  printLastTen(ascen, LENGTH);

  return 0;
}