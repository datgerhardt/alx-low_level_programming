#include <stdio.h>

/**
* main - Entry point
* Description: printing alphabet without e and q
* Return: Always 0 (Success)
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
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
