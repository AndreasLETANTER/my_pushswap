/*
** EPITECH PROJECT, 2021
** display list
** File description:
** display list
*/

#include "pushswap.h"
#include "my.h"

int display_list(int *array, int size)
{
    int i = 0;

    my_putchar('\n');
    while (i != size - 1) {
        my_put_nbr(array[i]);
        my_putstr(" ");
        i++;
    }
    my_put_nbr(array[i]);
    my_putchar('\n');
}
