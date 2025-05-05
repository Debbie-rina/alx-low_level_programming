#include "main.h"
/**
* Main - Entry point
*
* Description: Prints all letters in the alphabet in lowercase 
*
* Return: Always 0
**/
void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
        _putchar(c++);  // <-- First and only loop use of _putchar

    _putchar('\n');     // <-- Second use of _putchar for newline
}

int main(void)
{
    print_alphabet();
    return 0;
}
