#include "main.h"

/**
 * _strcmp-entry
 * @s1: p
 * @s2: p
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
