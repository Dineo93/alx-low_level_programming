#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
int a, j;
for (a = 0; a <= 9; a++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
