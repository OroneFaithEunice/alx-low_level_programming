#include "main.h"

/**
 *  _islower - tests to checks if character is lowercase leteer from the alphabet.
 *  @c: the characters.
 *  Return : 1 if lowercase and 0 if not
 *
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
