/*
** EPITECH PROJECT, 2020
** SOURCES
** File description:
** my_putstr.c
*/

#include "my_printf.h"

void my_putstr(char const *str, int fd)
{
    if (write(fd, str, my_strlen(str)) == -1)
        my_putstr("ERROR: cannot print.\n", STDERR_FILENO);
}