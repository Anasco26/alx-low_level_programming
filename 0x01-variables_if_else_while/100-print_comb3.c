#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int j;

	for (n = '0'; n < '9'; n++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (n == j)
				continue;
			putchar(n);
			putchar(j);
			if (!(n == '8' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
