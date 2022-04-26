/*
** EPITECH PROJECT, 2021
** if_op_rra_rrb_rrr.c
** File description:
** check if have to rrb rra rrr
*/

#include "include/my.h"
#include <stdlib.h>

int check_ifrrr(struct nblink *lista, struct nblink *listb, int lena, int lenb)
{
    struct nblink *taila = lista->pre;
    struct nblink *tailb = listb->pre;
    struct nblink *lasta = go_to_x_box(taila->next, 1);
    struct nblink *lastb = go_to_x_box(tailb->next, 1);

    if (lena < 2 || lenb < 2)
        return 1;
    listb = tailb->next;
    lista = taila->next;
    if (lasta->nb < lista->nb && lasta->nb < lista->next->nb &&
        lastb->nb > listb->nb)
        return (0);
    return (1);
}

void if_rrr(struct nblink *lista, struct nblink *listb, int lena, int lenb)
{
    struct nblink *taila = lista->pre;
    struct nblink *tailb = listb->pre;

    while (check_ifrrr(lista, listb, lena, lenb) == 0) {
        do_rrr(lista, listb);
        listb = tailb->next;
        lista = taila->next;
    }
}

int if_rra(struct nblink *lista, int lena)
{
    struct nblink *taila = lista->pre;
    struct nblink *lasta = go_to_x_box(taila->next, 1);
    int ave = 0;

    if (lena < 2)
        return 0;
    lista = taila->next;
    ave = calc_average(taila->next);
    lista = taila->next;
    if (lasta->nb < lista->nb && lasta->nb < lista->next->nb
        && lasta->nb < ave) {
        do_rra(lista);
        lista = taila->next;
        return 1;
    }
    return (0);
}

int if_rrb(struct nblink *listb, int lenb)
{
    struct nblink *tailb = listb->pre;
    struct nblink *lastb = go_to_x_box(tailb->next, 1);

    if (lenb < 2)
        return 0;
    listb = tailb->next;
    if (lastb->nb > listb->nb) {
        do_rrb(listb);
        listb = tailb->next;
        return 1;
    }
    return (0);
}
