/*
** EPITECH PROJECT, 2021
** linked_list.c
** File description:
** create linked list stock nb for pushswap
*/

#include "include/my.h"
#include <stdlib.h>

struct nblink *create_box(int n, struct nblink *p, struct nblink *l)
{
    struct nblink *new_box = malloc(sizeof(struct nblink*) * 3);

    if (new_box == NULL)
        return NULL;
    new_box->nb = n;
    new_box->next = l;
    new_box->pre = p;
    return (new_box);
}

void fill_firstbox(struct nblink *pre, struct nblink *last)
{
    pre->next = last;
    pre->pre = NULL;
    last->next = NULL;
    last->pre = pre;
}

struct nblink *fill_list(int ac, char **av)
{
    struct nblink *prebox = malloc(sizeof(struct nblink*) * 3);
    struct nblink *lastbox = malloc(sizeof(struct nblink*) * 3);
    struct nblink *new_block;

    if (prebox == NULL || lastbox == NULL)
        return NULL;
    fill_firstbox(prebox, lastbox);
    for (int i = 1; i < ac; i++) {
        new_block = create_box(my_getnbr(av[i]), prebox, lastbox);
        if (new_block == NULL)
            return NULL;
        prebox->next = new_block;
        lastbox->pre = new_block;
        prebox = new_block;
    }
    return (prebox);
}

struct nblink *go_to_x_box(struct nblink *list, int i)
{
    if (i == 0) {
        while (list->pre != NULL)
            list = list->pre;
        return (list->next);
    }
    if (i == 1) {
        while (list->next != NULL)
            list = list->next;
        return (list->pre);
    }
    return NULL;
}

void free_linked_list(struct nblink *list)
{
    struct nblink *buff = list->pre;

    while (buff != NULL) {
        list = buff;
        buff = list->next;
        free(list);
    }
}
