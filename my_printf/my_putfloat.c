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

void putspe(double nb)
{
    int save = 0;
    int verif = 0;

    for (int i = 1; save == 0; i = i * 10, verif++) {
        save = nb * i;
        if (verif == 1)
            my_putchar('.');
        if (save == 0)
            my_putchar('0');
    }
}

int my_putfloat(double nb)
{
    int counter = 0;

    int a = nb * 1000000;
    int stock = 1;

    putspe(nb);
    for (int temp = a; temp > 9; stock = stock * 10, temp = temp / 10);
    for (; stock != 0; stock = stock / 10) {
        my_putchar(a / stock + 48);
        counter ++;
        if (stock == 1000000) {
            my_putchar('.');
            counter ++;
        }
        a = a % stock;
    }
    return counter;
}
