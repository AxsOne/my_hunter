/*
** EPITECH PROJECT, 2022
** my_putnbr
** File description:
** my_putnbr
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c);

int my_putnbr(int nb)
{
    int counter = 0;

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        counter++;
    }
    if (nb <= 9) {
        my_putchar(nb + '0');
        counter++;
    }else {
        counter += my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
        counter++;
    }
    return counter;
}
