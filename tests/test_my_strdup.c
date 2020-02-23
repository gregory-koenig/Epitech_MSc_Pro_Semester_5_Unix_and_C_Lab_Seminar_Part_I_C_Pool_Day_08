/*
** EPITECH PROJECT, 2019
** test_my_strdup
** File description:
** CPool Day09 Task01
*/

#include <criterion/criterion.h>
#include <unistd.h>

char *my_strdup(char const *src);

Test(my_strdup, duplicate_string)
{
    cr_expect_str_eq(my_strdup("hello"), "hello");
}

Test(my_strdup, return_empty_string)
{
    cr_expect_str_empty(my_strdup(""), "");
}

Test(my_strdup, empty_pointer)
{
    char const *str = NULL;

    cr_expect_null(my_strdup(str));
}