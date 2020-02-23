/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** CPool Day08 Task03
*/

#include <unistd.h>
#include "libmy.h"

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}