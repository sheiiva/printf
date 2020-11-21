/*
** EPITECH PROJECT, 2020
** SOURCES // UTILS
** File description:
** my_realloc.c
*/

#include "my_printf.h"

char *my_realloc(char *str, size_t size)
{
    size_t i = 0;
    char *new = my_stralloc(my_strlen(str) + size);

    if (!new)
        return (NULL);
    while (str[i]) {
        new[i] = str[i];
        i += 1;
    }
    return (new);
}