#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
{
	/* Program to prints all single digit numbers from 0 - base 10, putchar */
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
