/*
** EPITECH PROJECT, 2018
** lib
** File description:
** my_hexa.c
*/

#include "my.h"
#include <stdlib.h>

void my_hexa_x_upper(va_list ap)
{
    int nb = va_arg(ap, int);
    
   if (nb < 0) {
        nb = -1 * nb;
        my_putchar('-');
    }    
    my_put_nbr_base(165, nb);
}