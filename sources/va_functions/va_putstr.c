/*
** EPITECH PROJECT, 2020
** SOURCES // VA_FUNCTIONS
** File description:
** va_print.c
*/

#include "my_printf.h"

void va_putstr(va_list ap)
{
    my_putstr(va_arg(ap, char *), STDOUT_FILENO);
}