# include "main.h"
/**
 * positive_or_negative-print if positive or negative
 * @i: the integr to be checked.
 * return: 0 
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);

	else if (i > 0)
		printf("%d is positive\n", i);

	else
		printf("%d is zero\n", i);
}
