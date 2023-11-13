#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to a format.
 * @format: A character string with format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    if (format == NULL)
        return -1;

    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && *(format + 1) != '\0')
        {
            switch (*(format + 1))
            {
            case 'c':
                count += _putchar(va_arg(args, int));
                break;
            case 's':
                count += _puts(va_arg(args, char *));
                break;
            case '%':
                count += _putchar('%');
                break;
            default:
                count += _putchar(*format);
                count += _putchar(*(format + 1));
            }

            format += 2;
        }
        else
        {
            count += _putchar(*format);
            format++;
        }
    }

    va_end(args);

    return count;
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts - Writes a string to stdout.
 * @str: The string to write.
 *
 * Return: The number of characters written.
 */
int _puts(char *str)
{
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        count += _putchar(*str);
        str++;
    }

    return count;
}
