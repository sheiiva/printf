/*
** EPITECH PROJECT, 2020
** INCLUDES
** File description:
** my_printf.h
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>

    #define LOWCASE 0
    #define UPCASE  1

    // -- BASE
    typedef enum base_s {
        BINARY      = 2,
        OCTAL       = 8,
        HEXA        = 16,
        HEXAUPPER   = -16
    } base_t;

    void my_printf(char const *s, ...);

    #ifndef UTILS_H_
        #define UTILS_H_

        char *my_realloc(char *str, size_t size);
        char *my_revstr(char *str);
        char *my_stralloc(size_t size);
        int my_strlen(char const *str);

    #endif /* !UTILS_H_ */


    #ifndef VA__H_
        #define VA__H_

        void va_putbinary(va_list ap);
        void va_putchar(va_list ap);
        void va_puthexa(va_list ap);
        void va_puthexa_upper(va_list ap);
        void va_putoctal(va_list ap);
        void va_putstr(va_list ap);
        void va_putnbr(va_list ap);

    #endif /* !VA__H_ */

    void my_putchar(char c, int fd);
    void my_putnbr_base(int nb, base_t base);
    void my_putnbr(int nb);
    void my_putstr(char const *str, int fd);

#endif /* !MY_PRINTF_H_ */