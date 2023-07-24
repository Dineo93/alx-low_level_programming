#include "main.h"

/**
 *_isalpha - checks fot alphabetic character
 *@al: Character to be checked
 *Return: 1 for alphabetic character or 0
 */

int _isalpha(int al)
{
if ((al >= 'a' && al <= 'z') || (al >= 'A' && al <= 'Z'))
{
return (1);
}
return (0);
}
