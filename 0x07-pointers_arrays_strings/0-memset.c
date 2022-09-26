#include "main.h"

/**
 * _memset - fills a memeory with a constant byte
 * @s: address to the memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: Pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
	}
	return (s);
}
