#include <stdio.h>

/**
 * main - print size of data in C programming 
 * code by Hartyplaza
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sixeof(b));
	printf("sige of a long int: %lu byte(S)", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(S)", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(S)", (unsigned long)sizeof(f));
	return (0);
}
