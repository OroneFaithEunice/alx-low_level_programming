#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point prints lowercase alphabets in reverse
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
