#include "main.h"
/**
 * _puts -to be printed
 * @str: to be printed
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
