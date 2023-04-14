/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_putchar
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
