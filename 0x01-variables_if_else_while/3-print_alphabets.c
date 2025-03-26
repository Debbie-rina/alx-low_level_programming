#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:program outputs the alphabet in lowercase
 * from a-z and also uppercase from A-Z
 *
 * Return:Always 0(success)
 */
int main(void)
{
        char letter;
	char letter_2;

        for (letter = 'a'; letter <= 'z'; letter++)
{
        putchar(letter);
}
	for (letter_2 = 'A'; letter_2 <= 'Z'; letter_2++)
{
	putchar(letter_2);
}
	putchar('\n');
	return (0);
}
