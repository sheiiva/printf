/*
** EPITECH PROJECT, 2020
** INCLUDES
** File description:
** struct.h
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <stdarg.h>

    #define FLAGS_NUMBER 6

    typedef struct flag_s {
        char c;
        void (*function)(va_list);
    }   flag_t;

#endif /* !STRUCT_H_ */