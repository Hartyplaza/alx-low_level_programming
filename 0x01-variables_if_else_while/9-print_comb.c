#include <stdio.h>

/**
 * main - the main fuction
 *
 * this is a c program,
 * it prints all possible combinations of single-digit numbers (0 - 9),
 * using the putchar fuction.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
