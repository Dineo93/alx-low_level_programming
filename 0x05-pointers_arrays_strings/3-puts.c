include "main.h"
/**
 * _puts - prints a string
 * @str: print string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\0');
}
