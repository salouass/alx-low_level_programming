#include "main.h"
/**
*print-alphabet - Prints the alphabet in lowercase.
*
*return: 0 (success) 
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}


