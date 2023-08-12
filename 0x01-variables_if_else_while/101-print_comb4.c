#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (k > j && j > i)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar('0' + k);
			if (i != 7 || j != 8)
					}
				putchar(',');
				putchar(' ');
			}
		}
	}
}
}
putchar('\n');
return (0);
}
