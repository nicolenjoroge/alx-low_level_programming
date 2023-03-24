#include "main.h"
/**
 * print_numbers -prints numbers to 9
 * Return: nothing
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
