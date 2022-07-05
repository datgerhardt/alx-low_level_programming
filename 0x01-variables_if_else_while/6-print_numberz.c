#include <stdio.h>

/**
* main - Entry point
* Description: printing number from 0 to 9 using putchar
* Return: Always 0 (Success)
*/

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
