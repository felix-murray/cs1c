#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "functions.h"

/******************************************************************
 *
 * FUNCTION sumDigit
 *_________________________________________________________________
 * This function returns the sum of all digits in a passed number.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int num : passed number to have digits added.
 * 
 * POST-CONDITIONS 
 * This function returns the sum of all digits in a passed number.
 *
 ******************************************************************/
int sumDigit(int num)
{
    return num / 100 + (num / 10) % 10 + num % 10;
}

/******************************************************************
 *
 * FUNCTION tripleDigit
 *_________________________________________________________________
 * This function returns the value tripled of a passed number.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int num : passed number to be tripled.
 * 
 * POST-CONDITIONS 
 * This function returns the value tripled of a passed number.
 *
 ******************************************************************/
int tripleDigit(int num)
{
    return num * 3;
}

/******************************************************************
 *
 * FUNCTION reverseDigit
 *_________________________________________________________________
 * This function returns the digits reversed of a passed number.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int num : passed number to be reversed.
 * 
 * POST-CONDITIONS 
 * This function returns the digits reversed of a passed number.
 *
 ******************************************************************/
int reverseDigit(int num)
{
    int new_num = 0;
    while (num > 0)
    {
        new_num = new_num * 10 + (num % 10);
        num = num / 10;
    }
    return new_num;
}

/******************************************************************
 *
 * FUNCTION populateArray
 *_________________________________________________________________
 * This function populates the passed array with random numbers in
 * the range 100 - 999.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int list[]       : passed array to be populated.
 * const int LENGTH : length of the array being passed.
 * 
 * POST-CONDITIONS 
 * The passed array will have LENGTH random numbers added to it.
 *
 ******************************************************************/
void populateArray(int list[], const int LENGTH)
{
    srand(time(NULL));
    for (int i = 0; i < LENGTH; i++)
    {
        list[i] = 100 + rand() % 899;
    }
}

/******************************************************************
 *
 * FUNCTION print
 *_________________________________________________________________
 * This function prints the current list in a user-friendly UI.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int list[]       : passed array to be printed.
 * const int LENGTH : length of the array being printed.
 * 
 * POST-CONDITIONS 
 * This function prints the current list in a user-friendly UI.
 *
 ******************************************************************/
void print(int array[], const int LENGTH)
{
    system("clear");
    std::cout << "\t\t\t\t        Current List: " << std::endl;
    for (int i = 0; i < LENGTH; i++)
    {
        std::cout << "\t\t\t\t        [" << i << "] " << array[i] << std::endl;
    }
}

/******************************************************************
 *
 * FUNCTION readFile
 *_________________________________________________________________
 * This function reads the file "numbers.txt" and uses data found
 * in the file to populate the passed array.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int list[]       : passed array to be manipulated.
 * const int LENGTH : length of the array being manipulated.
 * 
 * POST-CONDITIONS 
 * The passed array will have numnbers from "numbers.txt" added to it.
 *
 ******************************************************************/
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

/******************************************************************
 *
 * FUNCTION writeFile
 *_________________________________________________________________
 * This function writes the current list to the file "numbers.txt".
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int list[]       : passed array to be writen.
 * const int LENGTH : length of the array being writen.
 * 
 * POST-CONDITIONS 
 * The file "numbers.txt" will have the full list of values from the 
 * list.
 *
 ******************************************************************/
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

/******************************************************************
 *
 * FUNCTION selectionSort
 *_________________________________________________________________
 * This function sorts the passed array using the selection sort
 * algorithm.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int list[]       : passed array to be sorted.
 * const int LENGTH : length of the array being sorted.
 * 
 * POST-CONDITIONS 
 * The passed array will be sorted in descending order.
 *      
 ******************************************************************/
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

/******************************************************************
 *
 * FUNCTION selectNum
 *_________________________________________________________________
 * This function displays the current list and allows the user to 
 * pick a number to manipulate.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int list[]       : passed array to be displayed.
 * const int LENGTH : length of the array.
 * 
 * POST-CONDITIONS 
 * The passed array will be sorted in descending order.
 *      
 ******************************************************************/
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

/******************************************************************
 *
 * FUNCTION makeVars
 *_________________________________________________________________
 * This function creates a string, enumerated data type, and 
 * typedef and outputs them to demonstrate understanding.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * The created variables will be displayed to the console.
 *      
 ******************************************************************/
void makeVars()
{
    std::string str = "I am a string!";

    enum COLOR
    {
        RED,
        BLUE,
        GREEN,
        YELLOW
    };

    COLOR myColor = GREEN;

    typedef int myNum;
    myNum test;
    test = 23;

    system("clear");
    std::cout << "String 'str' is: " << str << std::endl;
    std::cout << "enum COLOR 'myColor' is: " << myColor << " which is equivalent to: RED" << std::endl;
    std::cout << "typdef 'myNum' is: " << test << std::endl;
}

/******************************************************************
 *
 * FUNCTION menu
 *_________________________________________________________________
 * This function creates the main menu for navigation and execution.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int list[]       : passed array to be manipulated.
 * const int LENGTH : length of the array.
 * POST-CONDITIONS 
 * Menu is displayed.
 *      
 ******************************************************************/
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
                  << "\t\t\t\t        7. Print enum, typedef, and string "
                  << std::endl
                  << "\t\t\t\t        8. Quit "
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

        std::cout << "\t\t\t\t        Enter Selection (0-8): ";
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
            system("read -n 1 -s -p \"\t\t\t\t        Press any key to continue...\"");
            break;
        case '7':
            makeVars();
            system("read -n 1 -s -p \"\t\t\t\t        Press any key to continue...\"");
            break;
        case '8':
            system("clear");
            exit = true;
            break;
        default:
            system("clear");
            std::cout << "\t\t\t\t        ERROR: Input must be an integer in range 1 - 6.";
            system("read -n 1 -s -p \"\t\t\t\t        Press any key to continue...\"");
            continue;
        }
    }
}
