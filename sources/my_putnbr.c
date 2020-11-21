/*
** EPITECH PROJECT, 2020
** SOURCES
** File description:
** my_put_nbr.c
*/

#include "my_printf.h"

void my_putnbr(int nb)
{
    int power = 1;
    int ab = 0;
    int c = 0;

    if (nb < 0) {
        my_putchar('-', STDOUT_FILENO);
        nb = -1 * nb;
    }
    while ((nb / power) > 10)
        power *= 10;
    while (power > 0) {
        c = nb % power;
        ab = (nb - c) / power;
        my_putchar(ab + '0', STDOUT_FILENO);
        nb = c;
        power /= 10;
    }
}