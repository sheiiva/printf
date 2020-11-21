/*
** EPITECH PROJECT, 2018
** my_put_char
** File description:
** put char_modulo
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

void my_putchar_modulo(va_list ap)
{
    (void)(ap);
    char a = '%';

    my_putchar(a);
}