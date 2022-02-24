/*
** EPITECH PROJECT, 2021
** two
** File description:
** two
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

void verif_two_number(int argc, int *array_a, int size)
{
    if (argc == 3) {
        swap_la(array_a, size);
        my_putstr("sa");
    }
}
