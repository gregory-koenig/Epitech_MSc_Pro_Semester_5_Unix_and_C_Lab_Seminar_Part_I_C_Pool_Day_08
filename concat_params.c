/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** CPool Day08 Task02
*/

#include <stdlib.h>
#include "libmy.h"

char *concat_params(int ac, char **av)
{
    int size = 0;
    int count = 0;
    char *str;

    for (int i = 0; i < ac; i++)
        size += my_strlen(av[i]);
    str = malloc(sizeof(char) * (size + 1));
    for (int i = 0; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            str[count] = av[i][j];
            count++;
        }
        if (i + 1 != ac) {
            str[count] = '\n';
            count++;
        }
    }
    str[count] = '\0';
    return (str);
}