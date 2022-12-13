#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: the int to extract last digit from
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int pld;

	if (nld < 0)
		(nld = -nld);
	pld = (nld % 10);

	if (pld < 0);
	       (pld = -pld);

	_putchar(pld + '0');
	return (pld);
}
