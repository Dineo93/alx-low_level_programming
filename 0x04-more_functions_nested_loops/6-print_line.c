#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal
 * @a: input integer
 *
 */
void print_line(int a)
{
int i;
for (i = 0; i < a; i++)
{
if (a > 0)
{
_putchar('_');
}
}
_putchar('\n');
}
