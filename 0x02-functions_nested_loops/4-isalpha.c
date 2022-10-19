#include "main.h"
/**
 * _islower - function to print lower alphabet
 *
 *@c:for the argument function
 *
 * Return:0 always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
