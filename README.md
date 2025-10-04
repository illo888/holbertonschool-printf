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
- `%S` : Print string with non-printables as \xXX
- `%p` : Print pointer address
- `%r` : Print reversed string
- `%R` : Print ROT13-encoded string

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
Output:
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
Output:
```bash
Octal: 377, Hex (lower): ff, Hex (upper): FF
```
Example 5:
```bash
_printf("100%% complete!\n");
```
Output:
```bash
100% complete!
```
Exmaple 6:
```bash
_printf("%S\n", "Best\nSchool");
```
Output:
```bash
Best\x0ASchool
```
Example 7:
```bash
_printf("%r\n", "Shaden");
```
Output:
```bash
nedahS
```
Example 8:
```bash
_printf("%R\n", "Hello");
```
Output:
```bash
Uryyb
```
Example 9:
```bash
_printf("%p", ptr);
```
Output:
```bash
0x7ffeefbff5ac
```
---
## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf_test
```
![My Logo]([https://upload.wikimedia.org/wikipedia/commons/a/ab/Logo_TV_2015.png](https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExcTh5NjJsam5veHN4MXB2em1xODV1azdkb2E[…]YiZlcD12MV9naWZzX3NlYXJjaCZjdD1n/BYoRqTmcgzHcL9TCy1/giphy.gif))






