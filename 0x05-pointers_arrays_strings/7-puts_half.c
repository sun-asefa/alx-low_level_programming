#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to an int
 * Return: Answer
 */

void puts_half(char *str)
{
	int a, last;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	last = (a + 1) / 2;
	for (a = last; str[a]; a++)
	{
		_putchar (str[a]);
	}
	_putchar ('\n');
}
