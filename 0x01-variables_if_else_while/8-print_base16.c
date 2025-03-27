#include <stdio.h>

/**
 * main -Entry point
 *
 * Description:program that prints all the numbers
 * of base 16 in lowercase
 *
 * Return:Always 0 (success)
 */

int main(void)
{
	int hex;

	for (hex = 0; hex < 16; hex++)
	putchar((hex < 10) ? (hex + '0') : (hex - 10 + 'a'));

		putchar('\n');

		return (0);
}

