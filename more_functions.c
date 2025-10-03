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
		_putchar(a[j + k] + '0');
	}
	return (count);
}
