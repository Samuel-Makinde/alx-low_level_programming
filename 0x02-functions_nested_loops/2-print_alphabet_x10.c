#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase.
 * Description: to be followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 97; ch < 123; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
