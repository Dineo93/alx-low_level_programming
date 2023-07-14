#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 *
 * Return: (0)
 *
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}

