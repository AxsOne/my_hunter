/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** my_strlen
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    return (len);
}
