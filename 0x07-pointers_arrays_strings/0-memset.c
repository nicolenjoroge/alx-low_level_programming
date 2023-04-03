#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: int typ
 * @n: to have a constant byte
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
