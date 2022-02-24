/*
** EPITECH PROJECT, 2021
** getnbr
** File description:
** getnbr
*/

#include "pushswap.h"
#include "my.h"

int get_nbr(char const *str)
{
    int nbr = 0;
    int i = 0;

    while (str[i] == ' ') {
        i++;
    }
    if (str[0] == '-') {
        i++;
    }
    while (str[i] >= 0 + 48 && str[i] <= 9 + 48) {
        nbr = nbr * 10 + (str[i] - 48);
        i++;
    }
    if (str[0] == '-')
        nbr = nbr * -1;
    return (nbr);
}
