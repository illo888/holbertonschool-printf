#include "main.h"
/**
 * convert_binary - Handles %b specifier in _printf
 * @args: list of arguments from _printf (expects unsigned int)
 *
 * Return: number of characters printed
 */

int convert_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));

	return (binary(n));
}

/**
 * binary - Helper function to print binary recursively
 * @n: unsigned int to convert to binary
 *
 * Return: number of characters printed
 */
int binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += binary(n / 2);

	count += _putchar((n % 2) + '0');

	return (count);
}
