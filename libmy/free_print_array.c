/*
** EPITECH PROJECT, 2021
** print_free_array.c
** File description:
** print or free an array
*/

#include "../include/my.h"
#include <stdlib.h>

char **free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
    return (array);
}

int print_array_char(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        my_putstr(array[i]);
    return (0);
}
