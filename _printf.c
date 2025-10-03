#include "main.h"
/**
 * _printf - Prints formatted output to stdout
 * @format: Format string containing specifiers
 *
 * Return: Number of characters printed (or -1 on error)
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			else if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == '%')
				count += print_percent();
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_integer(args);
			else if (format[i] == 'b')
				count += convert_binary(args);
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

