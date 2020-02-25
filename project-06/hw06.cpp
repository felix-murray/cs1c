//--------------------------------------------------------------------------
//  Project name: HW06
//--------------------------------------------------------------------------
//  Creator's name and email: Felix Murray felix.murray@gmail.com
//  Course Selection: CS1C
//  Due Date: 2/25/2020
//--------------------------------------------------------------------------
//  Purpose: Reverse a substring of an string / c-string using recursion.
//--------------------------------------------------------------------------
//  Algorithm:
//      Step 1: Initialize input variables and integer vector. 
//      Step 2: Prompt user for first and last indecies of substring to be
//              reversed.
//      Step 3: Reverse substring using recursive function.
//      Step 4: Either the user enterd another substring, or the program
//              exits if they enter -1 for either the first or last index
//--------------------------------------------------------------------------
#include <iostream>

void printArray(char toPrint[]);
void reverse(char toReverse[], int first, int last);
void getInput(char toReverse[]);

int main()
{
    system("clear");
    
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

    /* Tested with values: (11,18); (4,22); (0,25) */
    getInput(alphabet);

    return 0;
}

/******************************************************************
 *
 * FUNCTION printArray
 *_________________________________________________________________
 * This function prints the passed array to the console.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * char toReverse[]      : passed c-string to print
 *                 
 * POST-CONDITIONS 
 * This function prints the passed array to the console.
 *
 **************************************s****************************/
void printArray(char toPrint[])
{
    for (int i = 0; i < 26; i++)
    {
        std::cout << toPrint[i];
    }
}

/******************************************************************
 *
 * FUNCTION reverse
 *_________________________________________________________________
 * This function uses direct recursion to reverse a substring of a
 * character array (c-string) given the index of the first and last
 * character of the substring.
 * 
 * BASE CASE
 * first >= last
 * 
 * GENERAL CASE
 * first < last
 * 
 *_________________________________________________________________
 * PRE-CONDITIONS
 * char toReverse[]      : passed c-string to reverse
 *                 
 * int first             : passed integer for the first index
 * 
 * int last              : passed integer for the last index
 * POST-CONDITIONS 
 * This function uses direct recursion to reverse a substring of a
 * character array (c-string) given the index of the first and last
 * character of the substring.
 *
 **************************************s****************************/
void reverse(char toReverse[], int first, int last)
{
    /* BASE CASE */
    if (first >= last)
    {
        std::cout << "\nReversed String is: ";
        printArray(toReverse);
        std::cout << "\n\n";
        //reset array to original state
        return;
    }
    /* GENERAL CASE */
    int temp = toReverse[first];
    toReverse[first] = toReverse[last];
    toReverse[last] = temp;
    reverse(toReverse, first + 1, last - 1);
}

/******************************************************************
 *
 * FUNCTION printArray
 *_________________________________________________________________
 * This function gets user input for the indecies of the substring 
 * to reverse.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * char toReverse[]      : passed c-string to use in function calls
 *                 
 * POST-CONDITIONS 
 * This function gets user input for the indecies of the substring 
 * to reverse.
 *
 **************************************s****************************/
void getInput(char toReverse[])
{
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    int first = 0;
    int last = 0;
    char input;

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
        //reset c string to original value
        toReverse = alphabet;

        std::cout << "Press any key to continue...";
        std::cin >> input;
    }
}