#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lowercase alphabet backwards
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; --ch)
		putchar(ch);

	putchar('\n');

	return (0);
}
