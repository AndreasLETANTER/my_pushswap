/*
** EPITECH PROJECT, 2022
** B-CPE-110-NAN-1-1-pushswap-andreas.le-tanter
** File description:
** main
*/

#include "pushswap.h"
#include "my.h"
#include <stdlib.h>

int detect_if_number(int argc, char **argv, int i)
{
    for (int p = 0; argv[i][p]; p++) {
        if ((argv[i][p] < '0' || argv[i][p] > '9') && argv[i][p] != '-') {
            return (-1);
        }
    }
    return (0);
}

int handle_error(int argc, char **argv)
{
    for (int i = 1; argv[i]; i++) {
        if (detect_if_number(argc, argv, i) != 0) {
            return (-1);
        }
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc >= 2) {
        if (handle_error(argc, argv) == 0) {
            pushswap(argc, argv);
        } else {
            return (84);
        }
    } else {
        return (84);
    }
}
