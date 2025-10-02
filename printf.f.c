#include "main.h"
/* Convert number to string in given base */
char *convert(unsigned int num, int base, int uppercase);
if (format[i] == 'u') {
    unsigned int val = va_arg(args, unsigned int);
    char *str = convert(val, 10, 0);
}
else if (format[i] == 'o') {
    unsigned int val = va_arg(args, unsigned int);
    char *str = convert(val, 8, 0);
}
else if (format[i] == 'x') {
    unsigned int val = va_arg(args, unsigned int);
    char *str = convert(val, 16, 0);
}
else if (format[i] == 'X') {
    unsigned int val = va_arg(args, unsigned int);
    char *str = convert(val, 16, 1);
}
