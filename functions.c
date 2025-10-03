#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * print_char - prints a character
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
    int c = va_arg(args, int);
    _putchar(c);
    return (1);
}
/**
 * print_string - print a string from the argumet list
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
    int i;
    char *s = va_arg(args, char *);
    if (s == NULL)
        s = "(null)";
    for (i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[i]);
    }
    return (i);
}
/**
 * print_percent - prints a percent sign
 *
 * Return: number of characters printed (1)
 */
int print_percent(void)
{
    _putchar('%');
    return (1);
}
/**
 * print_integer - extracts integer from va_list and prints it
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
    int n = va_arg(args, int);
    return (print_number(n));
}
/**
 * print_number - prints an integer using recursion
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
    int count = 0;
    if (n < 0)
    {
        _putchar('-');
        count++;
        if (n == INT_MIN)
        {
            count += print_number(INT_MAX / 10);
            _putchar('8');
            return (count + 1);
        }
        n = -n;
    }
    if (n < 10)
    {
        _putchar(n + '0');
        count++;
    }
    else
    {
        count += print_number(n / 10);
        _putchar(n % 10 + '0');
        count++;
    }
    return (count);
}
/* lowercase hex */

char *convert(unsigned long num, int base, int lowercase)
{
    static char *rep;
    static char buffer[50];
    char *ptr;

    rep = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
    ptr = &buffer[49];
    *ptr = '\0';

    do {
        *--ptr = rep[num % base];
        num /= base;
    } while (num != 0);

    return (ptr);
}
