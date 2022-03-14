#include <stdio.h>

/**
 * main - to print alphabet in lowercase
 *
 * description: to print alphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
