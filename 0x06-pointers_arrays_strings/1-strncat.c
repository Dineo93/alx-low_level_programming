#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: string destination pointer
 * @src: source string pointer
 * @n: input value
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
int i, a;
i = 0;
while (dest[i] != '\0')
{
i++;
}
a = 0;
while (a < n && src[a] != '\0')
{
dest[i] = src[a];
i++;
a++;
}
dest[i] = '\0';
return (dest);
}
