#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == '\0')
		return (0);

	while (b[i])
	{
		if (b[i] != 0 && b[i] != 1)
			return (0);
		n *= 2 + b[i];
		i++;
	}

	return (n);
}
