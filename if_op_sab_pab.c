/*
** EPITECH PROJECT, 2021
** if_op.c
** File description:
** check if have to sa pb sb pa and if list sorted
*/

#include "include/my.h"
#include <stdlib.h>

void if_sa(struct nblink *lista, int lena)
{
    lista = go_to_x_box(lista, 0);
    if (lena >= 2) {
        if (lista->nb > lista->next->nb)
            do_sa(lista);
    }
}

int if_pb(struct nblink *lista, struct nblink *listb, int lena)
{
    struct nblink *listatail = lista->pre;
    struct nblink *listbtail = listb->pre;

    if (lena >= 2) {
        if (lista->nb <= lista->next->nb) {
            do_pb(lista, listb);
            return (1);
        }
    }
    return (0);
}

void if_sb(struct nblink *listb, int lenb)
{
    if (lenb >= 2) {
        if (listb->nb < listb->next->nb)
            do_sb(listb);
    }
}

int if_pa(struct nblink *lista, struct nblink *listb, int lenb)
{
    struct nblink *listatail = lista->pre;
    struct nblink *listbtail = listb->pre;

    for (int i = 0; i != lenb; i++) {
        do_pa(lista, listb);
        lista = listatail->next;
        listb = listbtail->next;
    }
    print_x_pa(lenb);
    if (is_list_sorted(lista) == 0) {
        return (1);
    }
    my_putchar(' ');
    lista = listatail;
    listb = listbtail;
    return (0);
}

int if_sc(struct nblink *lista, struct nblink *listb, int lena, int lenb)
{
    if (lenb >= 2 && lena >= 2) {
        if (listb->nb < listb->next->nb && lista->nb > lista->next->nb) {
            do_sc(lista, listb);
            return 1;
        }
    }
    return 0;
}
