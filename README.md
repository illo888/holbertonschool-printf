# _printf

## Description
`_printf` is a custom implementation of the C standard library function `printf`.  
It handles formatted output using variadic functions.

---

## Supported Format Specifiers
- `%c` : Print a single character
- `%s` : Print a string
- `%%` : Print a percent sign
- `%d` / `%i` : Print integers
- `%u`: Print a Unsigned decimal integer
- `%o` : Print a Octal representation	
- `%x`	: Print a Hexadecimal (lowercase)	
- `%X`	: Print a Hexadecimal (uppercase)	

---

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf_test


