/*
** EPITECH PROJECT, 2021
** pa_pb_rrpushswap.c
** File description:
** pa pb for pushswap
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>

int do_pb(struct nblink *lista, struct nblink *listb)
{
    struct nblink *a_prebuff;
    struct nblink *a_nextbuff;

    if (lista->pre->pre == NULL && lista->next == NULL)
        return (0);
    listb = go_to_x_box(listb, 0);
    lista = go_to_x_box(lista, 0);
    a_prebuff = lista->pre;
    a_nextbuff = lista->next;
    lista->pre = listb->pre;
    lista->next = listb;
    a_nextbuff->pre = a_prebuff;
    a_prebuff->next = a_nextbuff;
    listb->pre = lista;
    lista->pre->next = lista;
    write(1, "pb ", 3);
    return (1);
}

int do_pa(struct nblink *lista, struct nblink *listb)
{
    struct nblink *b_prebuff;
    struct nblink *b_nextbuff;

    if (listb->pre->pre == NULL && listb->next == NULL)
        return (0);
    lista = go_to_x_box(lista, 0);
    listb = go_to_x_box(listb, 0);
    b_prebuff = listb->pre;
    b_nextbuff = listb->next;
    listb->pre = lista->pre;
    listb->next = lista;
    b_nextbuff->pre = b_prebuff;
    b_prebuff->next = b_nextbuff;
    lista->pre = listb;
    listb->pre->next = listb;
    return (1);
}

void do_rb(struct nblink *list)
{
    struct nblink *buff = list;

    rotate_box(list);
    write(1, "rb ", 3);
    list = buff;
}

void do_ra(struct nblink *list)
{
    struct nblink *tail = list->pre;

    rotate_box(list);
    write(1, "ra ", 3);
    list = tail->next;
}

void do_rr(struct nblink *lista, struct nblink *listb)
{
    struct nblink *buffa = lista;
    struct nblink *buffb = listb;

    rotate_box(lista);
    rotate_box(listb);
    write(1, "ra ", 3);
    lista = buffa;
    listb = buffb;
}
