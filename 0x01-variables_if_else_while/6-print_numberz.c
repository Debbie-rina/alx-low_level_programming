#include <stdio.h>
/**
 * main -Entry point
 *
 * Description:program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
{
	putchar(num + '0');

}

	putchar('\n');

	return (0);
}

