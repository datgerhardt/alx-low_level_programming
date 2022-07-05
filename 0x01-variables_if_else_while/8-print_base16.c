#include <stdio.h>

/**
* main - Entry point
* Description: printing base 16  
* Return: Always 0 (Success)
*/

int main(void)
{
	char i = 48;

	while (i <= 102)
	{
		if (i >= 58 && i < 97)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
