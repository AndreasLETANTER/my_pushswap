/*
** EPITECH PROJECT, 2021
** arg to array
** File description:
** arg to array
*/

#include <stdlib.h>
#include "pushswap.h"
#include "my.h"

int *arg_to_array(int argc, char **argv)
{
    int *array_a = malloc(sizeof(int) * argc - 1);
    int size = 0;
    int size_arg = 1;
    int nbr;

    while (size_arg != argc) {
        nbr = get_nbr(argv[size_arg]);
        array_a[size] = nbr;
        size++;
        size_arg++;
    }
    return (array_a);
}
