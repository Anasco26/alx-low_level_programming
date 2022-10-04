#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument array
 * Return: 0 for success number otherwise
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
