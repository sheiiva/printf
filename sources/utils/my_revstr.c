/*
** EPITECH PROJECT, 2020
** SOURCES // UTILS
** File description:
** my_revstr.c
*/

#include <stddef.h>

char *my_revstr(char *str)
{
    char *ptr = str;
    char *rev_ptr = str;
    char cntnr;

    if (!str)
        return (NULL);
    while (*(rev_ptr + 1))
        rev_ptr = rev_ptr + 1;
    while (ptr < rev_ptr) {
        cntnr = *ptr;
        *ptr = *rev_ptr;
        *rev_ptr = cntnr;
        rev_ptr = rev_ptr - 1;
        ptr += 1;
    }
    return (str);
}