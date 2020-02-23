/*
** EPITECH PROJECT, 2019
** test_my_str_to_word_array
** File description:
** CPool Day08 Task04
*/

#include <criterion/criterion.h>

char **my_str_to_word_array(char const *str);

Test(my_str_to_word_array, parse_sentence_into_two_words)
{
    char str[] = "Hello World";
    char *array[] = {"Hello", "World"};

    cr_assert_arr_eq(my_str_to_word_array(), array);
}

Test(my_str_to_word_array,
        parse_sentence_with_many_special_characters_into_two_words)
{
    char str[] = "Hello  World!!";
    char *array[] = {"Hello", "World!"};

    cr_assert_arr_eq(my_str_to_word_array(str), array);
}