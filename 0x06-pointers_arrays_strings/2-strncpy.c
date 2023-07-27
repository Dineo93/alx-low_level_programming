#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: input value
 * @src: input value
 * @n: destination
 *
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, a;
i = 0;
while (dest[i] != '\0')
{
i++;
}
for (a = 0; a < n && src[a] != '\0'; i++, a++)
{
dest[i] = src[a];
}
dest[a] = '\0';
return (dest);
}
