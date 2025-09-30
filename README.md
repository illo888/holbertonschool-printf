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

---

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf_test
