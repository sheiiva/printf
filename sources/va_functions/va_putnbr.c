/*
** EPITECH PROJECT, 2020
** SOURCES // VA_FUNCTIONS
** File description:
** va_putnbr.c
*/

#include "my_printf.h"

void va_putnbr(va_list ap)
{
    my_putnbr(va_arg(ap, int));
}