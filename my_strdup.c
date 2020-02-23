/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** CPool Day08 Task01
*/

#include <stdlib.h>
#include <unistd.h>
#include "libmy.h"

char *my_strdup(char const *src)
{
    int count = my_strlen(src);
    char *str = malloc(sizeof(char) * (count + 1));
    int i = 0;

    if (src == NULL)
        return (0);
    for (; i < count; i++)
        str[i] = src[i];
    str[i + 1] = '\0';
    return (str);
}