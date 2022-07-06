#include <stdio.h>

/**
 * main - print the add of Fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;
	long int sum = 1;
	
	for (i = 1; i < 51; i++)
	{
		sum *= i;
		printf("%ld, ", sum);
	}
	return (0);
}
