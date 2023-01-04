#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to calculate number
 * Return: factorial number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
