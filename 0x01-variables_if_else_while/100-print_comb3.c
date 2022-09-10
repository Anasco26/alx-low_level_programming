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
		for (j = n + 1; j <= '9'; j++)
		{
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
