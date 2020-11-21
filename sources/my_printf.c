/*
** EPITECH PROJECT, 2020
** SOURCES
** File description:
** my_print.c
*/

#include "struct.h"
#include "my_printf.h"

static flag_t flags[FLAGS_NUMBER] = {
    {'b', va_putbinary},
    {'c', va_putchar},
    {'d', va_putnbr},
    {'i', va_putnbr},
    {'o', va_putoctal},
    {'p', va_putpointer},
    {'s', va_putstr},
    {'x', va_puthexa},
    {'X', va_puthexa_upper}
};

static void va_printf(char c, va_list ap)
{
    size_t i = 0;

    while (i < FLAGS_NUMBER) {
        if (c == flags[i].c) {
            flags[i].function(ap);
            return;
        }
        i += 1;
    }
    my_putchar('%', STDOUT_FILENO);
    my_putchar(c, STDOUT_FILENO);
}

void my_printf(char const *s, ...)
{
    size_t i = 0;
    va_list ap;

    va_start(ap, s);
    while (s[i]) {
        if (s[i] == '%')
            va_printf(s[++i], ap);
        else
            my_putchar(s[i], STDOUT_FILENO);
        i += 1;
    }
    va_end(ap);
}