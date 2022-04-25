#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string
 * @b: the constant byte
 * @n: bytes of the memory area
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
