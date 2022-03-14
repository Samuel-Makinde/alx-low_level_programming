#include <stdio.h>

/**
 * main - to print base 10 with putchar
 * description: to print in base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
