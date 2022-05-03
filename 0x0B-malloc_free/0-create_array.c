#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)

{
unsigned int i;
char *s;

if (size <= 0)
{
return (0);
}
s = malloc(sizeof(char) * size);
if (s == 0)
{
    return (0);
}
i = 0;

while (i < size)
{
*(s + i) = c;
i++;

*(s + i) = '\0';
}
return (s);
}
