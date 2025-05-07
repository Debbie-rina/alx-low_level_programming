#include "main.h"
/**
 * print_alphabet - prints all lowercase alphabets
 *
 * Description:print_alphabet prints all letters in the
 * alphabet in lowercase
 *
 * Return: void
 **/
void print_alphabet(void)
{
	char c = 'a';

		while (c <= 'z')
		_putchar(c++);
		_putchar('\n');
}
