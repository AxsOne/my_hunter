/*
** EPITECH PROJECT, 2022
** my_put_bin
** File description:
** my_put_bin
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int my_strlen(char const *str);
void my_putchar(char c);

int my_put_bin(int nb)
{
    int counter = 0;
    char *a = "01";

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        counter++;
    }
    if (nb < my_strlen(a)) {
        my_putchar(a[nb]);
        counter++;
    }else {
        counter += my_put_bin(nb / my_strlen(a));
        my_putchar(a[nb % my_strlen(a)]);
        counter++;
    }
    return counter;
}
