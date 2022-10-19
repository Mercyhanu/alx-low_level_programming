#include "main.h"

/**
 * _islower - entry point
 *
 * Description: checks lowercase character
 * @c: char to test
 *
 * Return: 1 if character is lowercase and 0 if character is not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
