/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** mini_printf
*/

#include "include/my.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int sndmodulo(char const *format, va_list *list, int i);

int modulo(char const *format, va_list *list, int i)
{
    if (format[i] == '%' && format[i + 1] == 's') {
        return my_putstr(va_arg(*list, char *));
    }
    if (format[i] == '%' && format[i + 1] == 'c') {
        return my_putchar(va_arg(*list, int));
    }
    if ((format[i] == '%' && format[i + 1] == 'd') || format[i + 1] == 'i') {
        return my_putnbr(va_arg(*list, int));
    }
    if ((format[i] == '%' && format[i + 1] == 'f')) {
        return my_putfloat(va_arg(*list, double));
    }
    if ((format[i] == '%' && format[i + 1] == 'x')) {
        return my_minhexa(va_arg(*list, int));
    }
    if ((format[i] == '%' && format[i + 1] == 'X')) {
        return my_puthexa(va_arg(*list, int));
    }
    return 0;
}

int error(char const *format, int i)
{
    if (format[i] == '%' && format[i + 1] == '%') {
        my_putchar('%');
    }
    if (format[i] != '%') {
        my_putchar(format[i]);
    }
    return 0;
}

int my_printf(char const *format, ...)
{
    int count = 0;
    va_list list;

    va_start (list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        error(format, i);
        if (format[i] == '%' && i < my_strlen(format) - 1) {
            count += modulo(format, &list, i);
            count += sndmodulo(format, &list, i);
            i++;
        } else
            count ++;
    }
    va_end (list);
    return count;
}
