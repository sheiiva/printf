/*
** EPITECH PROJECT, 2018
** lib
** File description:
** my_hexa_long_int.c
*/

#include "my_printf.h"

void my_sp_putchar(unsigned char c)
{
    my_putchar('\\', STDOUT_FILENO);
    if (c < 32) {
        my_putchar('0', STDOUT_FILENO);
        if (c <= 7)
            my_putchar('0', STDOUT_FILENO);
    }
    my_putnbr_base((int)c, OCTAL);
}

void my_putascii(va_list ap)
{
    int i = 0;
    unsigned char *str = va_arg(ap, unsigned char *);

    while (str[i]) {
        if (str[i] >= 32 && str[i] <= 127)
            my_putchar(str[i], STDOUT_FILENO);
        else
            my_sp_putchar(str[i]);
        i += 1;
    }
}