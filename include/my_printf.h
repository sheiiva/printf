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

    void my_printf(char const *s, ...);

    #ifndef VA__H_
        #define VA__H_
        
        void va_putchar(va_list ap);
        void va_putstr(va_list ap);

    #endif /* !VA__H_ */

    void my_putchar(char c, int fd);
    void my_putstr(char const *str, int fd);
    int my_strlen(char const *str);

#endif /* !MY_PRINTF_H_ */