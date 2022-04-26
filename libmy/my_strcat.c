/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** str cat
*/

#include <stdlib.h>
#include "../include/my.h"

int my_strlen_cat(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int size_dest = my_strlen_cat(dest);

    while (src[i] != '\0') {
        dest[size_dest] = src[i];
        size_dest++;
        i++;
    }
    dest[size_dest] = '\0';
    return (dest);
}

char *my_strcat_alloc(char *dest, char const *src)
{
    int i = 0;
    int size_dest = my_strlen_cat(dest);
    char *buff = malloc(sizeof(char) * (size_dest + my_strlen(src) + 2));

    my_strcpy(buff, dest);
    while (src[i] != '\0') {
        buff[size_dest] = src[i];
        size_dest++;
        i++;
    }
    buff[size_dest] = '\0';
    return (buff);
}
