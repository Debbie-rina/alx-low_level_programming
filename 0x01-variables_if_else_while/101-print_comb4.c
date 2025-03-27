#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ", " and in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number1, number2, number3;

	/* Loop for first digit */
	for (number1 = 0; number1 < 8; number1++)
	{
		/* Loop for second digit */
		for (number2 = number1 + 1; number2 < 9; number2++)
		{
			for (number3 = number2 + 1; number3 < 10; number3++)
			{

			putchar(number1 + '0');
			putchar(number2 + '0');
			putchar(number3 + '0');

			/* Print ", " except after the last combination */
			if (number1 != 7 || number2 != 8 || number3 != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}	
	putchar('\n');
	return (0);
}

