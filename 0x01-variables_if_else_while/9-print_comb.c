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
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
