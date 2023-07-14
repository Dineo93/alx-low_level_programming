#include <stdio.h>
/**
  *main - Entry point
  *prints the alphabet in lowercase, and then in uppercase
  *Return: (0)
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (upper <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

