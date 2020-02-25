#include <iostream>
#include <string>
#include <algorithm>
#include "functions.h"

void printArray(char toPrint[])
{
    for (int i = 0; i < 26; i++)
    {
        std::cout << toPrint[i];
    }
}

void reverse(char toReverse[], int first, int last)
{
    if (first >= last)
    {
        std::cout << "\nReversed String is: ";
        printArray(toReverse);
        std::cout << "\n\n";
        return;
    }

    int temp = toReverse[first];
    toReverse[first] = toReverse[last];
    toReverse[last] = temp;

    // Recursive Function calling
    reverse(toReverse, first + 1, last - 1);
}

void getInput(char toReverse[])
{
    int first;
    int last;
    char input;

    bool exit = false;
    while (first != -1)
    {
        system("clear");
        std::cout << "Enter the number of the first character of the substring to be reversed (Enter -1 to Exit): ";
        std::cin >> first;

        if (first == -1)
        {
            break;
        }

        std::cout << "Enter the number of the last character of the substring to be reversed (Enter -1 to Exit): ";
        std::cin >> last;

        if (last == -1)
        {
            break;
        }
        reverse(toReverse, first, last);

        std::cout << "Press any key to continue...";
        std::cin >> input;
    }
}