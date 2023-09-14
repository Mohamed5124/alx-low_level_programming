#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of square
 *
 * Return: Always 0 (Sucess)
*/


void print_square(int size)
{
	int roq, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
