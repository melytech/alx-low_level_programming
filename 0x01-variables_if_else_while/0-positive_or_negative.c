#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program tells if a random number is positive or negative
 * Return: Always true
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
			printf("%i is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%i is zero\n", n);
		}
		else (n < 0)
			printf("%i is negative\n", n);
		{

		return (0);
} 
