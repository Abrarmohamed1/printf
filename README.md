The _printf function emulates functionality of the C standard library function printf, writing output to standard output.
The function uses a string format where the data to print is indicated, followed by the arguments to be printed (_printf use variadic functions to allow a custom number of arguments).

Prototype: int _printf(const char *format, ...);

Return Value: if the function is executed correctly, it returns the number of characters printed (not counting the null character). If something goes wrong, it returns -1.
