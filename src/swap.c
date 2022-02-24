/*
** EPITECH PROJECT, 2021
** swap
** File description:
** swap
*/

#include "../include/my.h"

void swap_la(int *array , int size)
{
    int swap;

    swap = array[0];
    array[0] = array[1];
    array[1] = swap;
}

void swap_lb(int *array , int size)
{
    int swap;

    swap = array[0];
    array[0] = array[1];
    array[1] = swap;
}
