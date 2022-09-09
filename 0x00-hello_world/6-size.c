#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %a byte(s)\n", sizeof(char));
	printf("Size of an int: %a byte(s)\n", sizeof(int));
	printf("Size of a long int: %a byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %a byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
