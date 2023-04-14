/*
** EPITECH PROJECT, 2022
** snd modulo
** File description:
** snd modulo
*/

#include "include/my.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int sndmodulo(char const *format, va_list *list, int i)
{
    if ((format[i] == '%' && format[i + 1] == 'o')) {
        return my_octal(va_arg(*list, int));
    }
    if ((format[i] == '%' && format[i + 1] == 'b')) {
        return my_put_bin(va_arg(*list, int));
    }
    if ((format[i] == '%' && format[i + 1] == 'p')) {
        return my_pointers(list);
    }
    return 0;
}
