/*
** EPITECH PROJECT, 2022
** B-CPE-110-NAN-1-1-pushswap-andreas.le-tanter
** File description:
** array_case
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

int *array_b_to_array_a(int *array_a, int *array_b, int size)
{
    int i = 0;

    while (i != size - 1) {
        array_a = pa_case(array_a, array_b, size);
        i++;
    }
    array_a[0] = array_b[0];
    array_a = rotate_left_la(array_a, size);
    array_b = rotate_left_lb(array_b, size);
    my_putstr("pa");
    return (array_a);
}

int *array_a_to_array_b(int *array_a, int *array_b, int size)
{
    array_b = pb_case(array_a, array_b, size);
    return (array_b);
}