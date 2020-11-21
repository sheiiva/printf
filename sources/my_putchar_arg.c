/*
** EPITECH PROJECT, 2018
** my_put_char
** File description:
** put char
*/

#include <unistd.h>
#include <stdarg.h>

void my_putchar_arg(va_list ap)
{
    char c = (char)va_arg(ap, int);

    write(1, &c, 1);
}