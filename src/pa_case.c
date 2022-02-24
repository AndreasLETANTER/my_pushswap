/*
** EPITECH PROJECT, 2021
** pa
** File description:
** pa
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

int *pa_case(int *array_a, int *array_b, int size)
{
    array_a[0] = array_b[0];
    array_a = rotate_left_la(array_a, size);
    array_b = rotate_left_lb(array_b, size);
    my_putstr("pa ");
    return (array_a);
}
