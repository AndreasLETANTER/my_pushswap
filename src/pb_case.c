/*
** EPITECH PROJECT, 2021
** pa
** File description:
** pa
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

int *pb_case(int *array_a, int *array_b, int size)
{
    array_b[0] = array_a[0];
    array_b = rotate_left_lb(array_b, size);
    my_putstr("pb ");
    return (array_b);
}
