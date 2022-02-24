/*
** EPITECH PROJECT, 2021
** bubble_sort_array
** File description:
** bubble_sort_array
*/

#include "../include/pushswap.h"
#include "../include/my.h"

void bubble_sort_array(int *array , int size)
{
    int swap = 0;
    int i = 0;
    int p = 1;

    while (i != size) {
        if (array[i] > array[p]) {
            swap_elem(array, array[i], array[p]);
            swap = 1;
        }
        i++;
        p++;
    }
    if (swap == 1) {
        bubble_sort_array(array, size);
    }
}
