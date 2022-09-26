#include "main.h"

/**
 * _memcpy - copies a mem area
 * @dest: mem area to be copied to
 * @src: mem area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied mem block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
