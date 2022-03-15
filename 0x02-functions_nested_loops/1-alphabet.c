#include "main.h"

/**
 * print_alphabet - to print alphabet
 * Description: to print in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
