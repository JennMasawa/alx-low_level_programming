#include <stdlib.h>

/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 * Return: The length of the string
 */
int _strlen(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        if (str[len] < '0' || str[len] > '9')
        {
            write(2, "Error\n", 6);
            exit(98);
        }
        len++;
    }
    return (len);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int len1, len2, i, j, product, carry, num1, num2;
    int *result;

    if (argc != 3)
    {
        write(2, "Error\n", 6);
        exit(98);
    }

    len1 = _strlen(argv[1]);
    len2 = _strlen(argv[2]);
    result = malloc(len1 + len2);

    if (result == NULL)
    {
        write(2, "Error\n", 6);
        exit(98);
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        num1 = argv[1][i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            num2 = argv[2][j] - '0';
            product = num1 * num2 + result[i + j + 1] + carry;
            carry = product / 10;
            result[i + j + 1] = product % 10;
        }

        result[i + j + 1] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
        _putchar(result[i] + '0');

    _putchar('\n');
    free(result);
    return (0);
}
