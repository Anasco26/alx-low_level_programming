#include "main.h"

/**
 * _isupper: check if a letter is uppercase
 * Return: 1 if uppercase and 0 else
 */

int _isupper(int c)
{
	char i;
	int rtn;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			rtn = 0;
		else
			rtn = 1;
		return (rtn);
	}
}
