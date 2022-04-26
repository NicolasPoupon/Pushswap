/*
** EPITECH PROJECT, 2021
** pa_pb_pushswap.c
** File description:
** pa pb for pushswap
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>

void rev_rotate_box(struct nblink *list)
{
    struct nblink *tail = list->pre;
    struct nblink *first = list;
    struct nblink *last = go_to_x_box(list, 1);
    struct nblink *beforelast = last->pre;
    struct nblink *head = last->next;

    list = last;

    list->next = first;
    list->pre = tail;

    head->pre = beforelast;
    tail->next = list;
    first->pre = list;
    beforelast->next = head;
}

void do_rra(struct nblink *list)
{
    struct nblink *tail = list->pre;

    rev_rotate_box(list);
    write(1, "rra ", 4);
    list = tail->next;
}

void do_rrb(struct nblink *list)
{
    struct nblink *tail = list->pre;

    rev_rotate_box(list);
    write(1, "rrb ", 4);
    list = tail->next;
}

void do_rrr(struct nblink *lista, struct nblink *listb)
{
    struct nblink *taila = lista->pre;
    struct nblink *tailb = listb->pre;

    rev_rotate_box(lista);
    rev_rotate_box(listb);
    write(1, "rrr ", 4);
    lista = taila->next;
    listb = tailb->next;
}
