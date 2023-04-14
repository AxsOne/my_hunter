/*
** EPITECH PROJECT, 2022
** my_pointers
** File description:
** my_pointers
*/

#include "include/my.h"
#include <stdarg.h>

int my_pointers(va_list *list)
{
    int counter = 0;
    unsigned long a = va_arg(*list, unsigned long);
    counter += my_putstr("0x");
    counter += my_minhexa(a);
    return counter;
}
