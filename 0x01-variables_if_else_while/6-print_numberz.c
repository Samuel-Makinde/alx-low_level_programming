#include <stdio.h>

/**
 * main - to print base 10 with putchar
 * description: to print in base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
