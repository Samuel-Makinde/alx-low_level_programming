#include <stdio.h>

/**
 * main - to exclude q and e
 * description: to print all character in alphbets except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar(10);
	return (0);
}
