/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** CPool Day08 Task04
*/

#include <stdlib.h>
#include "libmy.h"

char **my_str_to_word_array(char const *str)
{
    int size = my_strlen(str) + 1;
    int count = 0;

    for (int i = 0; i <= size; i++) {
        if ((str[i] < 'a' && str[i] > 'z') || (str[i] < 'A' && str[i] > 'Z')
        || (str[i] < 0 && str[i] > 9))
            count++;
    }
    return (0);
}