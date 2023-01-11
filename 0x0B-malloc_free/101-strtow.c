#include "main.h"

/**
 * _wcount - counts number of words
 * @sw: string
 * Return: int
 */

int _wcount(char *sw)
{
	int l, wc;

	l = 0, wc = 0;
	if (*(sw + l) == ' ')
		l++;
	while (*(sw + l))
	{
		if (*(sw + l) == ' ' && *(sw + l - 1) != ' ')
			wc++;
		if (*(sw + l) != ' '  && *(sw + l + 1) == 0)
			wc++;
		l++;
	}
	return (wc);
}

/**
 * _trspace - Moves adress to remove trailig whitespaces
 * @st: string
 *
 * Return: Pointer
 */

char *_trspace(char *st)
{
	while (*st == ' ')
		st++;
	return (st);
}
