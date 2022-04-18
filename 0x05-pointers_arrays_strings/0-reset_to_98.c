#include "main.h"
#include <stdio.h>

/**
 * modif_my_param - set the integer to 98
 * @n: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */
void reset_to_98(int *n)

{
   printf("Value of 'n': %x \n", n);
   printf("Address of 'n': %x \n", &n);
   *n = 98;
}
