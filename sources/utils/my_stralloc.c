/*
** EPITECH PROJECT, 2018
** SOURCES // UTILS
** File description:
** my_astr_lloc.c
*/

#include <stdlib.h>
#include <stddef.h>

char *my_strset(char *str, int n, char c)
{
    int i = 0;

    if (str == NULL || n <= 0)
        return (NULL);
    while (i < n)
        str[i++] = c;
    return (str);
}

char *my_stralloc(size_t size)
{
    char *tmp = malloc(sizeof(char) * (size + 1));

    if (!tmp)
        return (NULL);
    return (my_strset(tmp, (size + 1), '\0'));
}