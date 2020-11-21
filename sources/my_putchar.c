/*
** EPITECH PROJECT, 2020
** SOURCES
** File description:
** my_putchar.c
*/

#include "my_printf.h"

void my_putchar(char c, int fd)
{
    if (write(fd, &c, 1) == -1)
        my_putstr("ERROR: cannot print.\n", STDERR_FILENO);
}