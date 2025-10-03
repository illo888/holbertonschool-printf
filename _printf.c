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
else if (format[i] == 'u') {
count += convert_binary(args);
}
else if (format[i] == 'o') {
count += convert_binary(args);
}
else if (format[i] == 'x') {
count += convert_binary(args);
}
else if (format[i] == 'X') {
count += convert_binary(args);
}
else if (format[i + 1] == 'b')
{
    count += convert_binary(args);
    i++;
}
count += _putchar('%');
count += _putchar(format[i]);
}
else
{
count += _putchar(format[i]);
i++;
}
{
va_end(args);
return (count);
}
