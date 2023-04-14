/*
** EPITECH PROJECT, 2022
** my_minhexa
** File description:
** my_minhexa
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int my_strlen(char const *str);
void my_putchar(char c);

int my_minhexa(long nb)
{
    int counter = 0;
    char *a = "0123456789abcdef";

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        counter++;
    }
    if (nb < my_strlen(a)) {
        my_putchar(a[nb]);
        counter++;
    }else {
        counter += my_minhexa(nb / my_strlen(a));
        my_putchar(a[nb % my_strlen(a)]);
        counter++;
    }
    return counter;
}
