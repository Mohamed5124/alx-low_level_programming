#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all the alphabet except q and e
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
