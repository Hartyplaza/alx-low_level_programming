#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int h;

	if (!b)
		return (0);

	for (h = 0; b[h]; h++)
		;
	h--;
	for (place = 1, uint = 0; h >= 0; h--)
	{
		if (b[h] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[h] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
