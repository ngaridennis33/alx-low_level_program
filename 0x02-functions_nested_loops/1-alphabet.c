#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
