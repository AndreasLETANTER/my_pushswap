/*
** EPITECH PROJECT, 2021
** my_functions
** File description:
** my_functions
*/

#ifndef MY_FUNCTIONS_H
    #define MY_FUNCTIONS_H

int display_list(int *array, int size);

void swap_la(int *array , int size);

void swap_lb(int *array , int size);

int *rotate_left_la(int *array, int size);

int *rotate_left_lb(int *array, int size);

int *rotate_right_la(int *array, int size);

int *rotate_right_lb(int *array, int size);

int get_nbr(char const *str);

int *arg_to_array(int argc, char **argv);

int *sort(int *array_a, int *array_b, int size, int argc);

int find_smallest_index(int *array_a, int size);

int *array_b_to_array_a(int *array_a, int *array_b, int size);

int *pb_case(int *array_a, int *array_b, int size);

int *pa_case(int *array_a, int *array_b, int size);

int verif_sort(int *array_a, int size);

void verif_two_number(int argc, int *array_a, int size);

void swap_elem(int *array , int index1 , int index2);

void bubble_sort_array(int *array , int size);

int *array_a_to_array_b(int *array_a, int *array_b, int size);

int *ra_or_rra(int smallest_index, int new_size, int *array_a);

void pushswap(int argc, char **argv);

int display_ra(int smallest_index, int nb_swap);

#endif
