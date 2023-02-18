#include <stdio.h>

/**
 * main - main fuction
 *
 * this is a c program
 * it prints hexadecimal numbers in lowercase
 * using the putchar fuction
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char h;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (h = 'a' ; h <= 'h' ; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
