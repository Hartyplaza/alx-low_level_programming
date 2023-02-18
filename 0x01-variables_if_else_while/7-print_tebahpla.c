#include <stdio.h>

/**
 * main - the main fuction
 *
 * this i a c program,
 * it print alphabet in lowerscase,
 * but in reverse order
 * using the putchar fuction.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
