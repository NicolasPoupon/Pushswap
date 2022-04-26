/*
** EPITECH PROJECT, 2021
** pushswap.c
** File description:
** sort tabl int
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>

void print_x_pa(int nbpa)
{
    char *buff = malloc(sizeof(char) * (nbpa * 3));

    for (int i = 0; i != nbpa * 3; i++) {
        buff[i] = 'p';
        i++;
        buff[i] = 'a';
        i++;
        buff[i] = ' ';
    }
    buff[(nbpa * 3 - 1)] = '\0';
    write(1, buff, (nbpa * 3 - 1));
    free(buff);
}

void sort_list(struct nblink *lista, int len, int lena, struct nblink *listb)
{
    int lenb = 0;
    struct nblink *listatail = lista->pre;
    struct nblink *listbtail = listb->pre;
    int stop = 0;

    while (stop != 1) {
        if_sa(listatail->next, lena);
        if (if_pb(listatail->next, listbtail->next, lena) == 1) {
            lenb++;
            lena--;
        }
        if (if_sc(listatail->next, listbtail->next, lena, lenb) == 0)
            if_sb(listbtail->next, lenb);
        if (lena == 1) {
            stop = if_pa(listatail->next, listbtail->next, lenb);
            lena = len;
            lenb = 0;
        }
    }
}

int calc_average(struct nblink *lista)
{
    struct nblink *bufftail = lista;
    long long int res = 0;
    int nb_loop = 0;

    while (bufftail->next != NULL) {
        res += bufftail->nb;
        bufftail = bufftail->next;
        nb_loop++;
    }
    res /= nb_loop;
    return (res);
}

int pushswap(int ac, char **av)
{
    struct nblink *lista = fill_list(ac, av);
    struct nblink *listbhead = malloc(sizeof(struct nblink*) * 3);
    struct nblink *listbtail = malloc(sizeof(struct nblink*) * 3);
    struct nblink *listb;

    if (lista == NULL || listbhead == NULL || listbtail == NULL)
        return 84;
    fill_firstbox(listbtail, listbhead);
    lista = go_to_x_box(lista, 0);
    if (is_list_sorted(lista) == 1)
        sort_list(lista, ac - 1, ac - 1, listbhead);
    my_putchar('\n');
    free_linked_list(lista);
    free_linked_list(listbtail);
    return (0);
}
