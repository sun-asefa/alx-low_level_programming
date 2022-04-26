#include "main.h"
#include <unistd.h>

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

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
