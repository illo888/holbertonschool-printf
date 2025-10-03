#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototype of your _printf functions */
int _printf(const char *format, ...);

/* helper functions */
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_integer(va_list args);
int print_number(int n);
int convert_binary(va_list args);
#endif /* MAIN_H */
