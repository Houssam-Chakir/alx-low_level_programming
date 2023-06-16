#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: prints alphabets using a loop
 * prints them in lowcase the uppercase
 * Return: 0 to hand over control
 */

int main(void)
{
	int lowerCase = 97, upperCase = 65;
	/* z=122 Z=90 */

	while(lowerCase < 123)
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while(upperCase < 91)
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');
	return (0);
}



