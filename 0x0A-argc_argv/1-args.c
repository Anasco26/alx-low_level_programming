#include <stdio.h>

/**
 * main - Entry function
 * @argc: argument length
 * @argv: argument strings
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	while (*argv)
	{
		argv++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
