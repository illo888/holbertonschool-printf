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
## Examples
Example 1:
```bash
_printf("Hello, World!\n");
```
Output:
```bash
Hello, World!
```
Example 2:
```bash
_printf("Character: %c, String: %s\n", 'A', "Test");
```
Output
```bash
Character: A, String: Test
```
Example 3:
```bash
_printf("Signed: %d, Unsigned: %u\n", -42, 42);
```
Output:
```bash
Signed: -42, Unsigned: 42
```
Example 4:
```bash
_printf("Octal: %o, Hex (lower): %x, Hex (upper): %X\n", 255, 255, 255);
```
Output
```bash
Octal: 377, Hex (lower): ff, Hex (upper): FF
```
Example 5:
```bash
_printf("100%% complete!\n");
```
Output
```bash
100% complete!
```
---
## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf_test



