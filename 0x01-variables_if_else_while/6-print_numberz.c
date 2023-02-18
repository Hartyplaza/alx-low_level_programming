#include <stdio.h>
/**
 * main - the main fuction
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
