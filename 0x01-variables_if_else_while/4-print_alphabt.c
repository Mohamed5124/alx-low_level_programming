#include <stdio.h>

/**
 * main - Entery point.
 *
 * Description: print the alphabet except e and q.
 *
 * Return: Always 0 (success)
 *
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z');
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
