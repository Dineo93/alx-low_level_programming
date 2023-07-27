#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i, a;
i = 0;
while (dest[i] != '\0')
{
i++;
}
for (a = 0; src[a] != '\0'; a++, i++)
{
dest[i] = src[a];
}
dest[i] = '\0';
return (dest);
}
