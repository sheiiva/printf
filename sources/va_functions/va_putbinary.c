/*
** EPITECH PROJECT, 2020
** SOURCES // VA_FUNCTIONS
** File description:
** va_putbinary.c
*/

#include "my_printf.h"

void va_putbinary(va_list ap)
{
    int nb = va_arg(ap, int);
    
    if (nb < 0) {
        nb *= -1;
        my_putchar('-', STDOUT_FILENO);
    }
    my_putnbr_base(nb, BINARY);
}