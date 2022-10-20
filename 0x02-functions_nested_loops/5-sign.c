#include "main.h"
/**
 * print_sign - prints the signs of anumber
 * @n: the number of signs printed
 * Return: 1 if > than 0
 * 0 of number is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
