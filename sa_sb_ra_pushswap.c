/*
** EPITECH PROJECT, 2021
** op_pushswap.c
** File description:
** op for pushswap.c
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>

void swap_box_nb(struct nblink *box1, struct nblink *box2)
{
    int buff = box1->nb;

    box1->nb = box2->nb;
    box2->nb = buff;
}

void rotate_box(struct nblink *list)
{
    struct nblink *tail = list->pre;
    struct nblink *first = list;
    struct nblink *second = first->next;
    struct nblink *last = go_to_x_box(list, 1);
    struct nblink *head = last->next;

    list = first;

    list->next = head;
    list->pre = last;

    head->pre = list;
    tail->next = second;
    second->pre = tail;
    last->next = list;
}

void do_sa(struct nblink *list)
{
    swap_box_nb(list, list->next);
    write(1, "sa ", 3);
}

void do_sb(struct nblink *list)
{
    swap_box_nb(list, list->next);
    write(1, "sb ", 3);
}

void do_sc(struct nblink *lista, struct nblink *listb)
{
    swap_box_nb(lista, lista->next);
    swap_box_nb(listb, listb->next);
    write(1, "sc ", 3);
}
