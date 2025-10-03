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
int print_rot13(va_list args);
int print_pointer(va_list args);
int binary(unsigned int n);
int unsigned_print(va_list args);
int print_unsigned_(unsigned int n);
int print_octal(va_list args);
int octal(unsigned int n);
int print_hexadecimal(va_list args);
int print_hex(unsigned int n);
int print_HEXADECIMAL(va_list args);
int print_HEX(unsigned int n);
#endif /* MAIN_H */
