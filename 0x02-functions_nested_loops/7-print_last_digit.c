#include "main.h"

/**
 * print_last_digit -> prints the last digit of the number
 * @n: the int to extract last digit from 
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	a = (n % 10);
	if (r < 0)
		r = -a;
	_putchar(r + '0');
	return (0);
}
