#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "functions.h"

/*
a. Write a program that uses a random number generator to
generate a three digit integer that allows the user to perform
the following operations:
3. Reverse the digits
b. Use an enum, typedef, and string variable
*/

void pause()
{
#ifdef _WIN32
    // pause on windows
    system("pause");
#else
    // on unix systems, read one character and then continue
    system("read -n 1 -s -p \"\t\t\t\t        Press any key to continue...\"");
#endif
}

int sumDigit(int num)
{
    return num / 100 + (num / 10) % 10 + num % 10;
}

int tripleDigit(int num)
{
    return num * 3;
}

int reverseDigit(int num)
{
    int new_num = 0;
    while(num > 0)
    {
            new_num = new_num*10 + (num % 10);
            num = num/10;
    }
    return new_num;
}

void populateArray(int list[], const int LENGTH)
{
    srand(time(NULL));
    for (int i = 0; i < LENGTH; i++)
    {
        list[i] = 100 + rand() % 899;
    }
}

void print(int array[], const int LENGTH)
{
    system("clear");
    std::cout << "\t\t\t\t        Current List: " << std::endl;
    for (int i = 0; i < LENGTH; i++)
    {
        std::cout << "\t\t\t\t        [" << i << "] " << array[i] << std::endl;
    }
}

void readFile(int list[], const int LENGTH)
{
    int temp;
    int count = 0;
    std::string fileName;
    std::ifstream inFile;

    inFile.open("numbers.txt");

    while (count < LENGTH)
    {
        inFile >> temp;
        list[count] = temp;
        count++;
    }

    inFile.close();
}

void writeFile(int list[], const int LENGTH)
{
    int count = 0;
    std::ofstream outFile;

    outFile.open("numbers.txt");

    while (count < LENGTH)
    {
        outFile << list[count] << " ";
        count++;
    }
}

void selectionSort(int list[], const int LENGTH)
{
    int index;
    int smallestIndex;
    int location;
    int temp;
    system("clear");

    for (index = 0; index < LENGTH - 1; index++)
    {
        smallestIndex = index;

        for (location = index + 1; location < LENGTH; location++)
        {
            if (list[location] < list[smallestIndex])
            {
                smallestIndex = location;
            }
        }
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}

int selectNum(int list[], const int LENGTH)
{
    bool exit = false;
    int choice;

    std::cout << "\t\t\t\t        Current List: " << std::endl;
    print(list, LENGTH);
    std::cout << std::endl;
    std::cout << "\t\t\t\t        Enter the index of the number you would like to manipulate: ";
    std::cin >> choice;

    return list[choice];
}

void menu(int list[], const int LENGTH)
{
    int numToUse = -1;
    char choice;
    bool exit;
    bool first = true;
    int temp;
    char flag;

    populateArray(list, LENGTH);

    while (!exit)
    {
        system("clear");
        std::cout << "\t\t\t\t        -Random Number Operations-"
                  << std::endl
                  << std::endl
                  << "\t\t\t\t        Selected Number: " << numToUse
                  << std::endl
                  << "\t\t\t\t        0. Select Number "
                  << std::endl
                  << "\t\t\t\t        1. Sum Digits "
                  << std::endl
                  << "\t\t\t\t        2. Triple Number "
                  << std::endl
                  << "\t\t\t\t        3. Reverse Digits "
                  << std::endl
                  << "\t\t\t\t        4. Write to File "
                  << std::endl
                  << "\t\t\t\t        5. Read File "
                  << std::endl
                  << "\t\t\t\t        6. Print List "
                  << std::endl
                  << "\t\t\t\t        7. Quit "
                  << std::endl;
        switch (flag)
        {
            case '1':
                std::cout << "\n\t\t\t\t        Digit Sum is: " << temp << "\n\n";
                break;
            case '2':
                std::cout << "\n\t\t\t\t        Number Tripled is: " << temp << "\n\n";
                break;
            case '3':
                std::cout << "\n\t\t\t\t        Number Reversed is: " << temp << "\n\n";
                break;
        }

        std::cout << "\t\t\t\t        Enter Selection (0-7): ";
        std::cin >> choice;

        switch (choice)
        {
        case '0':
            numToUse = selectNum(list, LENGTH);
            break;
        case '1':
            temp = sumDigit(numToUse);
            flag = '1';
            break;
        case '2':
            temp = tripleDigit(numToUse);
            flag = '2';
            break;
        case '3':
            temp = reverseDigit(numToUse);
            flag = '3';
            break;
        case '4':
            selectionSort(list, LENGTH);
            writeFile(list, LENGTH);
            break;
        case '5':
            readFile(list, LENGTH);
            break;
        case '6':
            selectionSort(list, LENGTH);
            print(list, LENGTH);
            pause();
            break;
        case '7':
            system("clear");
            exit = true;
            break;
        default:
            system("clear");
            std::cout << "\t\t\t\t        ERROR: Input must be an integer in range 1 - 6.";
            pause();
            continue;
        }
    }
}
