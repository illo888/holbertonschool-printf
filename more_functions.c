#include "main.h"
/**
 * convert_binary - to convert number to binary
 * @args: list of arguments
 *
 * Return: number of characters printed
 */

int convert_binary(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);
	int count = 0;
	unsigned int a[7];
	int j = 7;
	int k;

	while (i > 0)
	{

		if (i % 2 == 0)
		{
			a[j] = 0;
			count++;
			j--;
		}
		else if (i % 2 == 1)
		{
			a[j] = 1;
			count++;
			j--;
		}
		i /= 2;
	}

	j = j + 1;
	for (k = 0; k < count; k++)
	{
		int convert_binary(va_list args)
{
	/**
 * convert_binary - Converts an unsigned int to binary and prints it
 * @args: Argument list containing the unsigned int
 *
 * Return: Number of characters printed
 */

    unsigned int n = va_arg(args, unsigned int);
    int i, count = 0;
    int binary[32];

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    for (i = 0; n > 0; i++)
    {
        binary[i] = n % 2;
        n /= 2;
    }

    while (i--)
    {
        _putchar(binary[i] + '0');
        count++;
    }

    return (count);
}

		_putchar(a[j + k] + '0');
	}
	return (count);
}

