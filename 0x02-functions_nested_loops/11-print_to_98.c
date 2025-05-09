#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting integer
 *
 * Description: Prints numbers in order separated by comma and space.
 *              Handles both ascending and descending sequences.
 * Return: void
 */
void print_to_98(int n)
{
	int step;

	if (n < 98)
		step = 1;
	else
		step = -1;

	while (1)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
		n += step;
	}
	printf("\n");
}
