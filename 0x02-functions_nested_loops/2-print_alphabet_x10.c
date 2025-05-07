#include "main.h"
/**
 * print_alphabet x10 - prints the alphabet a-z 10 times in lowercase
 *
 * Description:uses nested loops to print a-z 10 times
 *
 * Return:void
 **/
void print_alphabet_x10(void)
{
	int i;
	char c;

		for (i = 0; i <= 10; i++)
		{
			c = 'a';
			while(c <= 'z')
			{
				_putchar(c);
				c++;
			}
				_putchar('\n');
			}
}

