#include "main.h"
/**
 * _isdigit - checking for digits
 * @c: parameter test
 * Return: 1 if a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
