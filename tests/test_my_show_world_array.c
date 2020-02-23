/*
** EPITECH PROJECT, 2019
** test_my_show_word_array
** File description:
** CPool Day08 Task03
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_show_word_array(char * const *tab);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
}

Test(my_show_word_array, concatenate_two_array_words_in_string,
        .init=redirect_all_stdout)
{
    char *word_array[] = {"Hello", "World!"};

    my_show_word_array(word_array);
    cr_expect_stdout_eq_str("Hello\nWorld!\n");
}