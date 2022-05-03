#include "main.h"

#include <ctype.h>
/**
 * _isupper - returns 1 for uppercase
 *@c: is the parameter
 *Return: positive int if it id uppercase
 */
int _isupper(int c)
{
if (c > 'A' && c < 'Z')

return (1);

else

return (0);

}
