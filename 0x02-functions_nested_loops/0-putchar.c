#include "main.h"

/**
 * main - to print _putchar
 * Description: to print _putchar as a word
 * Return: Always 0 (Success)
 */

int main(void)
{
	char words[9] = "_putchar";
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(words[i]);
	}
	_putchar('\n');
	return (0);

}
