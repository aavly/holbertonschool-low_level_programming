#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 * main - This program will assign a random number
 * to the variable n each time it is execute
 *
 * Return: always 0.
 *
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* yo*/
	
	return (0);
}
