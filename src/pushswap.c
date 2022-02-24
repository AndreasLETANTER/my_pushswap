/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** pushswap
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

void free_memory(int *array_a, int *array_b)
{
    free(array_a);
    free(array_b);
}

int verif_sort(int *array_a, int size)
{
    int temp = array_a[0];
    int i = 0;

    while (i != size) {
        if (temp > array_a[i])
            return (1);
        temp = array_a[i];
        i++;
    }
    return (0);
}

void pushswap(int argc, char **argv)
{
    int *array_a = arg_to_array(argc, argv);
    int *array_b = malloc(sizeof(int) * argc - 1);
    int size = argc - 1;

    if (verif_sort(array_a, size) == 1 && argc > 3) {
        array_a = sort(array_a, array_b, size, argc);
    } else if (verif_sort(array_a, size) == 1) {
        verif_two_number(argc, array_a, size);
    }
    my_putstr("\n");
    free_memory(array_a, array_b);
}
