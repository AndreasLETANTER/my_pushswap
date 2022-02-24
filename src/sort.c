/*
** EPITECH PROJECT, 2021
** sort
** File description:
** sort
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

int find_smallest_index(int *array_a, int size)
{
    int swap = 1;
    int i = 1;
    int p = 1;
    int smallest_index = 0;
    int smallest_nb = array_a[0];

    while (i != size) {
        if (smallest_nb > array_a[i]) {
            smallest_nb = array_a[i];
            smallest_index = i;
        }
        i++;
    }
    return (smallest_index);
}

int display_ra(int smallest_index, int nb_swap)
{
    int nb_rotate = 0;

    while (nb_rotate < (smallest_index - nb_swap)) {
        my_putstr("ra ");
        nb_rotate++;
    }
}

int check_if_all_in_b(int *array_a, int size)
{
    for (int i = 0; i != size; i++) {
        if (array_a[i] != ' ') {
            return (1);
        }
    }
    return (0);
}

int *my_realloc(int *array, int new_size, int size)
{
    int *new_array = malloc(sizeof(int) * new_size);
    int p = 0;

    for (int i = 0; i != new_size + 1; i++) {
        if (array[i] != ' ') {
            new_array[p] = array[i];
            p++;
        }
    }
    free(array);
    return (new_array);
}

int *sort(int *array_a, int *array_b, int size, int argc)
{
    int smallest_index = 0;
    int new_size = size;
    int first_case = 0;
    int swap = 0;

    for (int i = 0; i != size; i++) {
        smallest_index = find_smallest_index(array_a, new_size);
        array_a = ra_or_rra(smallest_index, new_size, array_a);
        array_b = array_a_to_array_b(array_a, array_b, size);
        rotate_left_la(array_a, new_size);
        new_size--;
    }
    array_a = array_b_to_array_a(array_a, array_b, size);
    return (array_a);
}
