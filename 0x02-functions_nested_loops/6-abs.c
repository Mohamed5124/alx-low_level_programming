#include "main.h"

/**
 * _abs - function that computes the absoulte
 *        value of an integer
 *
 * @n: takes an integer type input for function
 *
 * Return: Always 0 (Sucess)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
