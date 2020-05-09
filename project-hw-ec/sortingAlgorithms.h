#ifndef SORTINGALGORITHMS_H_
#define SORTINGALGORITHMS_H_

void selectionSort(int list[], const int LENGTH);
void insertionSort(int list[], const int LENGTH);
void bubbleSort(int list[], const int LENGTH);
void merge(int *arr, int low, int high, int mid);
void mergeSort(int *list, int low, int high);
void fillArray(int list[], const int LENGTH, int fillType);
void printLastTen(int list[], const int LENGTH);
void printFirstTen(int list[], const int LENGTH);

#endif