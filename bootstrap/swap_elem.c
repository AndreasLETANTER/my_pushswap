/*
** EPITECH PROJECT, 2021
** swap_elem
** File description:
** swap elem
*/

#include "../include/my.h"

void swap_elem(int *array , int index1 , int index2)
{
    int swap;

    swap = array[index1];
    array[index1] = array[index2];
    array[index2] = swap;
}
