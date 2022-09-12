#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check whether digit is less than 5
 *
 * Return = Always 0
 */
int main(void)
{
	int n;
	int m;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5) 
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	} else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, m);
	} else if (n < 6 && n != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	}
	return (0);
