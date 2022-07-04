#include <stdio.h>

/**
* main - Entry point
* Description: printing number from 0 to 9
* Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');
	return (0);
}
