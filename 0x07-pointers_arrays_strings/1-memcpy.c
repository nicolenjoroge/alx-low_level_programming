#include "main.h"
/**
 * _memcpy - copys memory area
 *
 * @dest: to be returned
 *
 * @src: contains memory area
 *
 * @n: value to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; r < i; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
