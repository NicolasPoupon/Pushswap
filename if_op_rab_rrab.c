/*
** EPITECH PROJECT, 2021
** if_op_rab_rrab.c
** File description:
** check if have to ra rb rrb rra rr rrr
*/

#include "include/my.h"
#include <stdlib.h>

int check_if_rr(struct nblink *lista, struct nblink *listb, int lena, int lenb)
{
    struct nblink *taila = lista->pre;
    struct nblink *tailb = listb->pre;
    struct nblink *lasta = go_to_x_box(taila->next, 1);
    struct nblink *lastb = go_to_x_box(tailb->next, 1);

    if (lena < 2 || lenb < 2)
        return 1;
    listb = tailb->next;
    lista = taila->next;
    if (lista->nb > lasta->nb && lista->nb > lista->next->nb &&
        listb->nb < lastb->nb)
        return (0);
    return (1);
}

void if_rr(struct nblink *lista, struct nblink *listb, int lena, int lenb)
{
    struct nblink *taila = lista->pre;
    struct nblink *tailb = listb->pre;

    while (check_if_rr(lista, listb, lena, lenb) == 0) {
        do_rr(lista, listb);
        listb = tailb->next;
        lista = taila->next;
    }
}

int if_ra(struct nblink *lista, int lena)
{
    struct nblink *taila = lista->pre;
    struct nblink *lasta = go_to_x_box(taila->next, 1);

    if (lena < 2)
        return 0;
    lista = taila->next;
    if (lista->nb > lasta->nb && lista->nb > lista->next->nb) {
        do_ra(lista);
        lista = taila->next;
        return 1;
    }
    return (0);
}

int if_rb(struct nblink *listb, int lenb)
{
    struct nblink *tailb = listb->pre;
    struct nblink *lastb = go_to_x_box(tailb->next, 1);

    if (lenb < 2)
        return 0;
    listb = tailb->next;
    if (listb->nb < lastb->nb) {
        do_rb(listb);
        listb = tailb->next;
        return 1;
    }
    return (0);
}
