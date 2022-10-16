#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point prints alphabet in lowercase and uppercase
 * Return: 0 when sucessful
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
