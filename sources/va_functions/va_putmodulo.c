/*
** EPITECH PROJECT, 2020
** SOURCES // VA_FUNCTIONS
** File description:
** va_putmodulo.c
*/

#include "my_printf.h"

void va_putmodulo(va_list ap)
{
    (void)ap;
    my_putchar('%', STDOUT_FILENO);
}