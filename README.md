## printf

This project is a simple implementation of the C standard library function `printf` that formats and prints data to stdout.

Prototype: `int _printf(const char *format, ...);`

## Description

The `_printf` function writes to stdout according to specified formats and returns the number of printed characters on success, and -1 when the function fails.

The format specifiers are:
- %c:
- %s:
- %d: Prints decimal
- %i: Prints integer

Using a `struct` data type which contains the declaration of a char pointer `*fmt` and a pointer to a function called `*func` the `print_num` function will receive a type `val_list` which will be the list of arguments that will be printed in case there's a match between the struct first argument `fmt` and the format.

The struct calls different functions for printing dpending on which one matches the format specified by the user as shown;

```
fmt st_format[] = {
	{"d", print_num},
	{"i", print_num}};
```

The [test.c](/tests/test.c) in the test folder file can be used to test the function. Copy all the files into the `tests` directory and compile as follows to run the test:

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.h`

### Authors
- [Olatunde Oludeye](https://github.com/Olu-d)
- [Barack Walindi](https://github.com/walindi)
