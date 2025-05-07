#include <unistd.h>
/**
 * _putchar - writes the char c to stdout 
 * Return: on succes 1
 * on error -1
 **/
int _putchar(char c)
{
	return(write(1,&c,1));
}
