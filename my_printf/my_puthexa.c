/*
** EPITECH PROJECT, 2022
** my_puthexa
** File description:
** my_puthexa
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int my_strlen(char const *str);
void my_putchar(char c);

int my_puthexa(long nb)
{
    int counter = 0;
    char *a = "0123456789ABCDEF";

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        counter++;
    }
    if (nb < my_strlen(a)) {
        my_putchar(a[nb]);
        counter++;
    }else {
        counter += my_puthexa(nb / my_strlen(a));
        my_putchar(a[nb % my_strlen(a)]);
        counter++;
    }
    return counter;
}
