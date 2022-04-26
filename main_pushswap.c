/*
** EPITECH PROJECT, 2021
** main_pushswap.c
** File description:
** main for pushswap
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "include/my.h"

int main(int ac, char **av)
{
    if (error_handling_pushswap(ac, av) == 84) {
        write(2, "wrong arguments\n", 16);
        return (84);
    }
    if (ac == 2) {
        my_putchar('\n');
        return (0);
    }
    if (pushswap(ac, av) == 84)
        return (84);
    return (0);
}
