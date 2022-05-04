#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width of the columen
 * @height: height of the rows
 * Return: size of string
 */

int **alloc_grid(int width, int height)
{
int **s, i, j, a, b;

b = 0;
if (width <= 0 || height <= 0)
return (0);

s = malloc(height * sizeof(int *));
if (s == 0)
return (0);
for (i = 0; i < height; i++)
{
*(s + i) = malloc(width * sizeof(int));
if (*(s + i) == 0)
{
b = 1;
break;
}
for (j = 0; j < width; j++)
{
s[i][j] = 0;
}
}
if (b == 1)
{
for (a = 0; a <= i; a++)
{
free(*(s + a));
}
free(s);
}
return (s);
}
