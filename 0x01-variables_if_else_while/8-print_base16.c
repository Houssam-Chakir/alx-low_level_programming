#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Description: using loops to print base 16 numbers
 * Return: 0 to hand over control
 */

int main(void)
{
        int index1 = 0, index2 = 97;

        while (index1 < 58)
        {
                putchar(index1);
                index1++;
	}

        while (index2 < 103)
        {
                putchar(index2);
                index2++;
        }

        putchar('\n');
        return (0);
}
