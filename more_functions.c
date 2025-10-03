#include "main.h"
#include <limits.h>
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
/**
 * unsigned_print - wil convert any negative number will be positive
 * @args: list of arguments from _printf
 *
 * Return: unsigned_ function
 */
int unsigned_print(va_list args)
{
    unsigned int i = va_arg(args, unsigned int);
    return (print_unsigned_(i));
}
/**
 * unsigned_ - Helper function to print unsigned number
 * @n: unsigned number
 *
 * Return: number of charcters printed
 */
 int print_unsigned_(unsigned int n)
 {
    int count = 0;
    if (n < 10)
    {
        _putchar(n + '0');
        count++;
    }
    else
    {
        count += print_unsigned_(n / 10);
        _putchar(n % 10 + '0');
        count++;
    }
    return (count);
}
/**
 * print_octal - Print in octal
 * @args: Arguments list
 *
 * Return: Number of characters printed
 */
 int print_octal(va_list args)
{
    unsigned int i = va_arg(args, unsigned int);
    return (octal(i));
}
int octal(unsigned int n)
{
    int count = 0;
        if (n < 8)
        {
            _putchar(n + '0');
            count++;
        }
        else
        {
            count += octal(n / 8);
            _putchar(n % 8 + '0');
            count++;
        }
    return (count);
}
int print_hexadecimal(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    return (print_hex(n));
}
/**
 * print_hex - Helper function to print number in lowercase hex
 * @n: unsigned int number
 *
 * Return: number of characters printed
 */
int print_hex(unsigned int n)
{
    int count = 0;
    char *hex = "0123456789abcdef";
    if (n >= 16)
        count += print_hex(n / 16);
    count += _putchar(hex[n % 16]);
    return (count);
}
int print_HEXADECIMAL(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    return (print_HEX(n));
}
/**
 * print_HEX - Helper function to print number in uppercase hex
 * @n: unsigned int number
 *
 * Return: number of characters printed
 */
int print_HEX(unsigned int n)
{
    int count = 0;
    char *HEX = "0123456789ABCDEF";
    if (n >= 16)
        count += print_HEX(n / 16);
    count += _putchar(HEX[n % 16]);
    return (count);
}
