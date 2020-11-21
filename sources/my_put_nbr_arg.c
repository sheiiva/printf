/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** lib
*/

#include "my.h"
#include <stdarg.h>

void my_put_nbr_arg(va_list ap)
{
    int nb = va_arg(ap, int);
    int power = 1;
    int ab = 0;
    int c = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -1 * nb;
    }
    while ((nb / power) > 10)
        power *= 10;
    while (power > 0) {
        c = nb % power;
        ab = (nb - c) / power;
        my_putchar(ab + '0');
        nb = c;
        power = power / 10;
        ab = 0;
    }
}