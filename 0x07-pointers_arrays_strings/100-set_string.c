#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: double pointer to a string
 * @to: pointer to the string to set s to
 * Return: returned value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
