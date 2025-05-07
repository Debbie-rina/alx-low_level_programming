#include "main.h"
/**
*
* Description: Prints all letters in the alphabet in lowercase 
*
* Return: Always 0
**/
void print_alphabet(void)
{
	char c = 'a';

		while (c <= 'z')
		_putchar(c++);
		_putchar('\n');   
}
