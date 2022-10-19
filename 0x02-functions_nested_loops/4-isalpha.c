#include "main.h"

/**
 * _isalpha - entry point
 * Description: checks for alphabetic character
 * @c: character to test
 *
 * Return:- 1 if character is a letter and 0 if character is not a letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
