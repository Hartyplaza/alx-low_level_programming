#include "main.h"

/**
 * print_last_digit - fuction that prints last digit
 *
 * @i: fuction parameter
 *
 * Return: k (success)
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (i < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
