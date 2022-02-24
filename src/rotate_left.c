/*
** EPITECH PROJECT, 2021
** rotate  left
** File description:
** rotate left
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

int *ra_or_rra(int smallest_index, int new_size, int *array_a)
{
    if (smallest_index == 1) {
        swap_la(array_a, new_size);
        my_putstr("sa ");
        return (array_a);
    }
    if (smallest_index <= (new_size / 2)) {
        for (int i = 0; i != smallest_index; i++) {
            array_a = rotate_left_la(array_a, new_size);
            my_putstr("ra ");
        }
        return (array_a);
    } else {
        for (int i = smallest_index; i != new_size; i++) {
            array_a = rotate_right_la(array_a, new_size);
            my_putstr("rra ");
        }
        return (array_a);
    }
}

int *rotate_left_la(int *array, int size)
{
    int swap;
    int i = 0;

    swap = array[0];
    while (i != size - 1) {
        array[i] = array[i + 1];
        i++;
    }
    array[i] = swap;
    return (array);
}

int *rotate_left_lb(int *array, int size)
{
    int swap;
    int i = 0;

    swap = array[0];
    while (i != size - 1) {
        array[i] = array[i + 1];
        i++;
    }
    array[i] = swap;
    return (array);
}
