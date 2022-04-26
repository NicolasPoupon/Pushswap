/*
** EPITECH PROJECT, 2021
** test.c
** File description:
** test pushswap
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(error_handling_pushswap, no_arg)
{
    int ac = 1;
    char *av[2] = {"./my_pushswap", NULL};

    cr_assert_eq(error_handling_pushswap(ac, av), 84);
}

Test(error_handling_pushswap, wrong_arg)
{
    int ac = 2;
    char *av[3] = {"./my_pushswap", "a",NULL};

    cr_assert_eq(error_handling_pushswap(ac, av), 84);
}

Test(error_handling_pushswap, good_arg)
{
    int ac = 4;
    char *av[5] = {"./my_pushswap", "1", "-19", "0", NULL};

    cr_assert_eq(error_handling_pushswap(ac, av), 0);
}

Test(pushswap, one_nb, .init = redirect_all_std)
{
    int ac = 2;
    char *av[3] = {"./my_pushswap", "1", NULL};

    pushswap(ac, av);
    cr_assert_stdout_eq_str("\n");
}

Test(pushswap, 2nb_unsort, .init = redirect_all_std)
{
    int ac = 3;
    char *av[4] = {"./my_pushswap", "3", "-1", NULL};

    pushswap(ac, av);
    cr_assert_stdout_eq_str("sa pb pa\n");
}

Test(pushswap, small_unsort, .init = redirect_all_std)
{
    int ac = 5;
    char *av[6] = {"./my_pushswap", "4", "1", "2", "3", NULL};

    pushswap(ac, av);
    cr_assert_stdout_eq_str("sa pb sa pb sa pb pa pa pa\n");
}
