#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;

	while (src[i++])
		srclen++;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	for (i = srclen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
