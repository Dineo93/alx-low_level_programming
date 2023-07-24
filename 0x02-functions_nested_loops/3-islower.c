#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * @al: Character to be checked
 * Return: 1  if character is lowercase, otherwise 0
 */

int _islower(int al)
{
if (al >= 'a' && al <= 'z')
{
return (1);
}
else
return (0);
}
