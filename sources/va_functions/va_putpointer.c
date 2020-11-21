/*
** EPITECH PROJECT, 2020
** SOURCES // VA_FUNCTIONS
** File description:
** va_putpointer.c
*/

#include "my_printf.h"

void va_putpointer(va_list ap)
{
    int nb = (int)(unsigned long int)va_arg(ap, void *);
    char const *str = "Ox";

    my_putstr(str, STDOUT_FILENO);
    my_putnbr_base(nb, HEXA);
}