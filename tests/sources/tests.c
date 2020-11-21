/*
** EPITECH PROJECT, 2020
** TESTS // SOURCES
** File description:
** tests.c
*/

#include "cri_func.h"
#include "my_printf.h"

#include <stdio.h>

Test(my_printf, simple_string, .init=redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

// Test(my_printf, empty_string, .init=redirect_all_std)
// {
//     my_printf("");
//     cr_assert_stdout_eq_str("");
// }

Test(my_printf, without_any_char_str, .init=redirect_all_std)
{
    my_printf(" ");
    cr_assert_stdout_eq_str(" ");
}

Test(my_printf, with_special_char, .init=redirect_all_std)
{
    my_printf("hello "" # ? ! : world");
    cr_assert_stdout_eq_str("hello "" # ? ! : world");
}

Test(my_printf, with_nothing_after_modulo, .init=redirect_all_std)
{
    my_printf("hello % world");
    cr_assert_stdout_eq_str("hello % world");
}

Test(my_printf, with_modulo_random, .init=redirect_all_std)
{
    my_printf("hello %r world");
    cr_assert_stdout_eq_str("hello %r world");
}

// Test(my_printf, with_double_modulo, .init=redirect_all_std)
// {
//     my_printf("hello %% world");
//     cr_assert_stdout_eq_str("hello % world");
// }

Test(my_printf, modulo_c_letter, .init=redirect_all_std)
{
    my_printf("hello to %c", 'u');
    cr_assert_stdout_eq_str("hello to u");
}

Test(my_printf, modulo_c_number, .init=redirect_all_std)
{
    my_printf("I want to break %c", '3');
    cr_assert_stdout_eq_str("I want to break 3");
}

Test(my_printf, modulo_c_spe_char, .init=redirect_all_std)
{
    my_printf("Hollaback %c", '!');
    cr_assert_stdout_eq_str("Hollaback !");
}

// Test(my_printf, multi_modulo, .init=redirect_all_std)
// {
//     my_printf("hello to %%%%%c", 'u');
//     cr_assert_stdout_eq_str("hello to %%u");
// }

Test(my_printf, modulo_d, .init=redirect_all_std)
{
    my_printf("hello %d you\n", 2);
    cr_assert_stdout_eq_str("hello 2 you\n");
}

Test(my_printf, modulo_i, .init=redirect_all_std)
{
    my_printf("hello %i you\n", 2);
    cr_assert_stdout_eq_str("hello 2 you\n");
}

// Test(my_printf, modulo_b, .init=redirect_all_std)
// {
//     my_printf("Binary of 8 is %b\n", 8);
//     cr_assert_stdout_eq_str("Binary of 8 is 1000\n");
// }

// Test(my_printf, modulo_b_neg, .init=redirect_all_std)
// {
//     my_printf("Binary of -8 is %b\n", -8);
//     cr_assert_stdout_eq_str("Binary of -8 is -1000\n");
// }

Test(my_printf, modulo_s, .init=redirect_all_std)
{
    my_printf("hello %s", "world");
    cr_assert_stdout_eq_str("hello world");
}

// Test(my_printf, modulo_o_neg, .init=redirect_all_std)
// {
//     my_printf("Octal of -8 is %o\n", -8);
//     cr_assert_stdout_eq_str("Octal of -8 is -10\n");
// }

// Test(my_printf, modulo_o, .init=redirect_all_std)
// {
//     my_printf("Octal of 8 is %o\n", 8);
//     cr_assert_stdout_eq_str("Octal of 8 is 10\n");
// }

// Test(my_printf, modulo_x, .init=redirect_all_std)
// {
//     my_printf("Hexa of 255 is %x", 255);
//     cr_assert_stdout_eq_str("Hexa of 255 is ff");
// }

// Test(my_printf, modulo_X, .init=redirect_all_std)
// {
//     my_printf("Hexa of 31 is %X", 31);
//     cr_assert_stdout_eq_str("Hexa of 31 is 1F");
// }

// Test(my_printf, with_pointer, .init=redirect_all_std)
// {
//     my_printf("Pointer on 31 print %p", 31);
//     cr_assert_stdout_eq_str("Pointer on 31 print Ox1f");
// }

// Test(my_printf, modulo_S, .init=redirect_all_std)
// {
//     my_printf("%S", "\a\0");
//     cr_assert_stdout_eq_str("\\007");
// }