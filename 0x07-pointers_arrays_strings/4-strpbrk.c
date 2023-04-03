#include "main.h"
/**
 * _strpbrk - locates any bytes
 * @s: string
 * @accept: accepts string
 * Return: s if contains bytes and null if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
