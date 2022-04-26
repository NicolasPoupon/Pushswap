/*
** EPITECH PROJECT, 2021
** print_list_check_sort.c
** File description:
** sort tabl int
*/

#include "include/my.h"
#include <stdlib.h>

void print_linked_list(struct nblink *list)
{
    list = go_to_x_box(list, 0);
    my_putstr("\n\nnew list\n");
    while (list->next != NULL) {
        my_putstr(" : ");
        my_put_nbr(list->nb);
        my_putchar('\n');
        list = list->next;
    }
    my_putstr("\n");
    list = go_to_x_box(list, 0);
}

int if_list_sorted(int lena, int len, struct nblink *lista)
{
    if (lena == len) {
        if (is_list_sorted(lista) == 0)
            return (1);
    }
    return (0);
}

int is_list_sorted(struct nblink *list)
{
    int buffnb;

    list = go_to_x_box(list, 0);
    buffnb = list->nb;
    list = list->next;
    while (list->next != NULL) {
        if (buffnb > list->nb)
            return (1);
        buffnb = list->nb;
        list = list->next;
    }
    return (0);
}
