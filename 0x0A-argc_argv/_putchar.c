#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: char to print
 * Return: on sucess 1 and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
