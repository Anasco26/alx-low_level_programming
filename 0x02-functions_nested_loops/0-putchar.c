#include "main.h"
#include <unistd.h>

/**
 * main - print _putchar
 * Return: 0 on successfuly
 * Return 1 otherwise
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
