/*
** EPITECH PROJECT, 2021
** rotate_right
** File description:
** rotate_right
*/

#include "pushswap.h"

int *rotate_right_la(int *array, int size)
{
    int swap = 0;
    int i = 0;
    int n = 0;
    while (n != size - 1) {
        swap = array[0];
        while (i != size - 1) {
            array[i] = array[i + 1];
            i++;
        }
        array[i] = swap;
        i = 0;
        n++;
    }
    return (array);
}

int *rotate_right_lb(int *array, int size)
{
    int swap;
    int i = 0;
    int n = 0;
    while (n != size - 1) {
        swap = array[0];
        while (i != size - 1) {
            array[i] = array[i + 1];
            i++;
        }
        array[i] = swap;
        i = 0;
        n++;
    }
    return (array);
}
