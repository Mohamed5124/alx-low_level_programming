#include "main.h"

/**
 * main - Entery point
 *
 * Description: print_alphabet - utilize on the _putchar function to print
 *                  the alphabet a - z
 *
 * Return: always 0 success
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
