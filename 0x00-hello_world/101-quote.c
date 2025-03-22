#include <unistd.h>
/**
 * main - Entry point
 *
 * description: prints a quote to the standard error output
 *
 * return: 1 error code
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}
