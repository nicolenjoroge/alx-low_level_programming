#include "main.h"

/**
 * _islower - checks for the lowercase letter
 *
 * @c: parameter to be returned
 *
 * Return: 1 when successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}
