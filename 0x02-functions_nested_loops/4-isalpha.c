#include "main.h"

/**
 * _isalpha - shows the alphabet
 *
 * @c: parameter to print if true
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

