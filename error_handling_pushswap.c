/*
** EPITECH PROJECT, 2021
** error_handling_pushswap.c
** File description:
** error handling for pushswap
*/

#include "include/my.h"
#include <stdlib.h>

int it_is_nb(char c)
{
    if (c >= '0' && c <= '9' || c == '-')
        return (0);
    return (1);
}

int there_is_nb(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (it_is_nb(str[i]) == 0)
            return (0);
    }
    return (1);
}

int it_is_str_num(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (it_is_nb(str[i]) == 1) {
            return (1);
        }
    }
    if (there_is_nb(str) == 1)
        return (1);
    return (0);
}

int error_handling_pushswap(int ac, char **av)
{
    if (ac == 1)
        return (84);
    for (int i = 1; i < ac; i++) {
        if (it_is_str_num(av[i]) == 1)
            return (84);
    }
    return (0);
}
