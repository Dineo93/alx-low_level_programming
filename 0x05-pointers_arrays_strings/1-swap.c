#include "main.h"
/**
 * swap_int - A  function that swaps the values of two integers
 * @c: integer to be swapped
 * @d: integer to be swapped
 */
void swap_int(int *c, int *d)
{
int i;
i = *c;
*c = *d;
*d = i;
}
