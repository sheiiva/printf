
/*
** EPITECH PROJECT, 2020
** SOURCES
** File description:
** va_putchar.c
*/

#include "my_printf.h"

void va_putchar(va_list ap)
{
    my_putchar((char)va_arg(ap, int), STDOUT_FILENO);
}