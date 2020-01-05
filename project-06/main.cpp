#include <iostream>
#include <string>


void iterative(char str[], int first, int last)
{
    int length = last - first + 1;
    int tempLength = length;
    char temp[length];
    char reversed[length];

    for (int i = first; i < last; i++)
    {
        temp[i] = str[i];
    }

    for (int i = 0; i < length; i++)
    {
        std::cout << temp[i];
    } 

    for (int i = 0; i < length; i++)
    {
        reversed[i] = temp[tempLength];
        tempLength--;
    } 

    // for (int i = 0; i < length; i++)
    // {
    //     std::cout << reversed[i];
    // } 
}

int main()
{
    char alphabet[] = {'a', 'b', 'c', 'd', 
                       'e', 'f', 'g', 'h', 
                       'i', 'j', 'k', 'l', 
                       'm', 'n', 'o', 'p', 
                       'q', 'r', 's', 't', 
                       'u', 'v', 'w', 'x', 
                       'y', 'z'};

    std::cout << alphabet[11];                      
    //iterative(alphabet, 11, 18);

    return 0;
}
