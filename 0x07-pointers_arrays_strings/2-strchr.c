#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character to return
 * Return: c if found, null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
