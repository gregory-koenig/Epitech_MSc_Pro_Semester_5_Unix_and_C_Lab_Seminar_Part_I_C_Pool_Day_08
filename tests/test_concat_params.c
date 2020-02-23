/*
** EPITECH PROJECT, 2019
** test_concat_params
** File description:
** CPool Day09 Task02
*/

#include <criterion/criterion.h>

char *concat_params(int ac, char **av);

Test(concat_params, concatenate_two_argv)
{
    char *str[] = {"Hello", "World!"};

    cr_expect_str_eq(concat_params(2, str), "Hello\nWorld!\0");
}