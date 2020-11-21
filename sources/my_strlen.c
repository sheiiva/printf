/*
** EPITECH PROJECT, 2020
** SOURCES
** File description:
** my_strlen.c
*/

int my_strlen(char const *src)
{
    int i = 0;

    while (src[i])
        i += 1;
    return (i);
}