#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 0; i < 100; i++)
    {
        for (j = i + 1; j < 100; j++)
	{
            printf("%02d %02d", i, j);
            if (i != 98 || j != 99)
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}
