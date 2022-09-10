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
	int k;

	for (n = '0'; n < '8'; n++)
	{
		for (j = n + 1; j < '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(n);
				putchar(j);
				putchar(k);
				if (!(n == '7' && j == '8' && k == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
