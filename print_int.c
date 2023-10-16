
#include <stdarg.h>
#include <string.h>

int print(const char *format, ...);

int main() {
    print("%d %i", 4, 6);
    return 0;
}

int print(const char *format, ...) {
    int format_length = strlen(format);
    va_list args;
    va_start(args, format);

    for (int i = 0; i < format_length; i++) {
        if (format[i] == '%' && (i < format_length - 1)) {
            i++;
            if (format[i] == 'd' || format[i] == 'i') {
                int x = va_arg(args, int);
                _putchar(x + '0');
            } else {
                _putchar('%');
                _putchar(format[i]);
            }
        } else {
            _putchar(format[i]);
        }
    }

    va_end(args);
    return 0;
}

