#include <iostream>
#include <string>
#include <algorithm>
#include "functions.h"

void reverse(std::string toReverse, int first, int last)
{
    static std::string final;
    static std::string reversed;
    static bool isFirst = true;
    size_t numOfChars;
    std::string str;

    if (isFirst)
    {
        str.assign(toReverse, first, last - first + 1);
        reversed.replace(0, toReverse.size(), toReverse);
        isFirst = false;
    }
    else
    {
        str = toReverse;
    }
    numOfChars = str.size();

    if (numOfChars == 1)
    {
        final.push_back(str[numOfChars - 1]);
        reversed.erase(first, last - first + 1);
        reversed.insert(first, final);

        std::cout << "Reversed String is: " << reversed << std::endl;

        /* Reseting Static Variables */
        isFirst = true;
        final.clear();
        reversed.clear();
    }
    else
    {
        final.push_back(str[numOfChars - 1]);
        reverse(str.substr(0, numOfChars - 1), first, last);
    }
}

void getInput(std::string toReverse)
{
    int first;
    int last;

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
        system("read -n 1 -s -p \"\nPress any key to continue...\"");
    }
}