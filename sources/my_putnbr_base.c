/*
** EPITECH PROJECT, 2020
** SOURCES
** File description:
** my_put_nbr_base.c
*/

#include "my_printf.h"

static char base_upper(int nb, int ccase)
{
    if (nb > 9) {
        if (ccase == LOWCASE)
            return ('a' + (nb - 10));
        else if (ccase == UPCASE)
            return ('A' + (nb - 10));
    }
    return (nb + '0');
}

static char *convert_str(int nb, base_t base, char *res)
{
    int i = 0;

    while (nb != 0) {
        if (base == HEXA)
            res[i++] = base_upper((nb % HEXA), LOWCASE);
        else if (base == HEXAUPPER)
            res[i++] = base_upper((nb % HEXA), UPCASE);
        else
            res[i++] = (nb % base) + '0';
        res = my_realloc(res, 1);
        res[my_strlen(res)] = res[i];
        nb = base == HEXAUPPER ? nb / -base : nb / base;
    }
    return (res);
}

void my_putnbr_base(int nb, base_t base)
{
    char *res = my_stralloc(1);

    if (!res)
        return;
    res = my_revstr(convert_str(nb, base, res));
    my_putstr(res, STDOUT_FILENO);
    free(res);
}