#include "main.h"

/**
 * print_alphabet -entry
 *
 * Return: 0 when sucessful
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
