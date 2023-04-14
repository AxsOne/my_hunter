/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my_h
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#ifndef MY_H_
    #define MY_H_

int my_strlen(char const *str);
int my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr(int nb);
int my_putfloat(double nb);
int my_minhexa(long nb);
int my_put_bin(int nb);
int my_puthexa(long nb);
int my_putnbr(int nb);
int my_octal(int nb);
int sndmodulo(char const *format, va_list *list, int i);
int my_pointers(va_list *list);

#endif /* MY_H_ */
