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
		printf("%s\n", *argv);
		argv++;
		argc++;
	}
	return (0);
}
