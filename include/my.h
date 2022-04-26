/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** prototypes fct
*/

#ifndef _MY_H
    #define _MY_H

struct nblink
{
    int nb;
    struct nblink *pre;
    struct nblink *next;
};

void print_x_pa(int nbpa);
int if_rrb(struct nblink *listb, int lenb);
int if_rra(struct nblink *lista, int lena);
void if_rrr(struct nblink *lista, struct nblink *listb, int lena, int lenb);
int if_rb(struct nblink *listb, int lenb);
int if_ra(struct nblink *lista, int lena);
int if_sc(struct nblink *lista, struct nblink *listb, int lena, int lenb);
void do_sc(struct nblink *lista, struct nblink *listb);
void if_rab(struct nblink *lista, struct nblink *listb, int lena, int lenb);
void if_rr(struct nblink *lista, struct nblink *listb, int lena, int lenb);
int calc_average(struct nblink *lista);
void do_rrr(struct nblink *lista, struct nblink *listb);
void do_rrb(struct nblink *list);
void do_rra(struct nblink *list);
void do_rr(struct nblink *lista, struct nblink *listb);
void do_rb(struct nblink *list);
void rotate_box(struct nblink *list);
int if_list_sorted(int lena, int lenb, struct nblink *lista);
int if_pa(struct nblink *lista, struct nblink *listb, int lenb);
void if_sb(struct nblink *listb, int lenb);
int if_pb(struct nblink *lista, struct nblink *listb, int lena);
void if_sa(struct nblink *lista, int lena);
void print_linked_list(struct nblink *list);
int is_list_sorted(struct nblink *list);
int do_pa(struct nblink *lista, struct nblink *listb);
int do_pb(struct nblink *lista, struct nblink *listb);
void fill_firstbox(struct nblink *pre, struct nblink *last);
struct nblink *go_to_x_box(struct nblink *list, int i);
void do_sb(struct nblink *list);
void do_sa(struct nblink *list);
void do_ra(struct nblink *list);
struct nblink *fill_list(int ac, char **av);
void free_linked_list(struct nblink *list);
int pushswap(int ac, char **av);
int error_handling_pushswap(int ac, char **av);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strdup(char const *src);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char * const *tab);
int it_is_alphanumeric(char c);
int count_space_to_cut(char const *str, int i);
int count_len_alphanumeric(char const *str);
char *delete_non_alphanumeric_char(char const *str, char *str_alpha);
int count_len_of_word(char *str);
int count_number_of_word(char *str);
int nb_char_word(char *str);
char *cpy_nospace(char *dest, char *str_alpha);
int check_alpha(char to_check, char c);
int it_is_alpha(char c);
int it_is_num(char c);
char *find_smallest_str(char *str1, char *str2);
char *find_bigger_str(char *str1, char *str2);
char *fill_str_of0(char *dest, char *src, int size);
char *infin_sub(char *str1, char *str2, char *res);
int compare_str(char *str1, char *str2);
void clear_first0(char *str);
char *find_smallest_strm(char *str1, char *str2);
char *find_bigger_str_min(char *str1, char *str2);
int it_is_prio_sign(char c);
int it_is_a_sign(char c);
char *my_strncpy_rev(char *dest, char const *src, int n);
int is_there_parent_in_str(char *str, char sign);
int *find_first_parent_to_calc(char *src, int *pos_parent, char const *sign);
char find_pos_calc_and_sign(char *src, int *pos_my_calc, char const *sign);
char *do_my_op(char sign, int *pos_my_calc, char *res, char *src);
char *replace_op_by_res(char *src, char *res, int *pos_my_calc);
int there_is_op(char *str, char const *sign);
char *my_infin_add(char *nb1, char *nb2, char *res);
int it_is_prio_sign_bistro(char c, char const *s);
char *eval_expr(char const *str, char const *sign, char *key_base);
char *add_minus_str(char *str);
void check_error_bistro(char *expr, char *base, char *ops);
int check_par(char *str, char open_par, char end);
char *decrypt_str_with_key(char *str, char *key);
char *encrypt_str_with_key(char *str, char *key);
char *delete_min_str(char *str);
char *my_infin_mult(char *nb1, char *nb2, char *res);
char *infin_mult_2pos(char *str1, char *str2, char *res);
char *mult_str_by_10(char *str, int time_m10);
void free_2str(char *str1, char *str2);
void clear_first0_let_one(char *str);
char *my_infin_div(char *num, char *div, char *res);
char *my_infin_modulo(char *num, char *div, char *res);
int par_sign(char *str, char *ops);
int print_array_char(char **array);
char **free_array_char(char **array);
int **free_array_int(int **array);
int print_array_int(int **array);
int print_array_char_jumpline(char **array);
int print_array_char_fast(char **array, int size);

#endif
