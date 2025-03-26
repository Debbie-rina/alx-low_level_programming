#include <stdio.h>
/**
 * main -Entry point
 *
 * Description:prints alphabet apart from 
 * some specified not to be printed
 *
 * Return:Always 0 (success)
 */
int main (void)
	char letter;
{
	for(letter 'a';letter <= 'z'; letter++)
{
	if (letter == 'q' || letter == 'e')
		continue;
	putchar(letter);
}
	putchar('\n');
	return (0);
}
