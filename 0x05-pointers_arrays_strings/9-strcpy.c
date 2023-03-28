#include "main.h"
/**
 * *_strcpy- entry
 * @dest: para
 * @src: para2
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}

