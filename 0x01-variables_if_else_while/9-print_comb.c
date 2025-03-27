#include <stdio.h>

/**
 * main -Entry point
 *
 * Description:Prints all possible combinations of single-digit numbers
 * Numbers are separated by ", " and printed in ascending order
 * Ends with "$" instead of a newline
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int des; 
	for (des = 0; des <= 9; des++)
	{
		putchar(des + '0');

		if (des != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
