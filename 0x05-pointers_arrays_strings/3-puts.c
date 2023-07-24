#include "main.h"

/**
 * _puts - prints a string
 * @str: print string
 *Return: new line and string
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
