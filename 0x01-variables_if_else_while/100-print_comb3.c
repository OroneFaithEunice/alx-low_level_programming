#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point prints two digits combinations
 * Return: 0
 */

int main(void)
{
	int c, i;

	for (c = 'o'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);
				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
