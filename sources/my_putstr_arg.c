/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** disp char of a str
*/

#include "my.h"
#include <stdarg.h>

void my_putstr_arg(va_list ap)
{
    char *str = va_arg(ap, char *);
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
}