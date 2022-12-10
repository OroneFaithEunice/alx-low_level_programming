#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: vlave of the last digit
 */

int print_last_digit(int nId)
{
	int pld;
	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
