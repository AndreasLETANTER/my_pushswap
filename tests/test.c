/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include "../include/pushswap.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(display_list_1, exit_code, .init=redirect_all_stdout)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    display_list(array, 6);
    cr_assert_stdout_eq_str("\n1 2 3 4 5 6\n");
}

Test(array_b_to_array_a, exit_code, .init=redirect_all_stdout)
{
    int array_a[6] = {1, 2, 3, 4, 5, 6};
    int array_b[6] = {0, 0, 0, 0, 0, 0};
    array_b_to_array_a(array_a, array_b, 6);
    cr_assert_stdout_eq_str("pa pa pa pa pa pa");
}

Test(array_a_to_array_b, exit_code, .init=redirect_all_stdout)
{
    int array_a[6] = {1, 2, 3, 4, 5, 6};
    int array_b[6] = {0, 0, 0, 0, 0, 0};
    array_a_to_array_b(array_a, array_b, 6);
    cr_assert_stdout_eq_str("pb ");
}

Test(display_ra, exit_code, .init=redirect_all_stdout)
{
    int array_a[6] = {1, 2, 3, 4, 5, 6};
    int array_b[6] = {0, 0, 0, 0, 0, 0};
    display_ra(1, 0);
    cr_assert_stdout_eq_str("ra ");
}

Test(two_number_1, exit_code, .init=redirect_all_stdout)
{
    int array[2] = {2, 1};
    verif_two_number(3, array, 2);
    cr_assert_stdout_eq_str("sa");
}

Test(display_list_2, exit_code, .init=redirect_all_stdout)
{
    int array[6] = {-1, -2, -3, -4, -5, -6};
    display_list(array, 6);
    cr_assert_stdout_eq_str("\n-1 -2 -3 -4 -5 -6\n");
}

Test(get_nbr_1, basic)
{
    cr_assert_eq(get_nbr("42"), 42);
}

Test(get_nbr_2, basic)
{
    cr_assert_eq(get_nbr("pomme"), 0);
}

Test(get_nbr_3, basic)
{
    cr_assert_eq(get_nbr("  58   "), 58);
}

Test(get_nbr_4, basic)
{
    cr_assert_eq(get_nbr("-58"), -58);
}

Test(rotate_left_la, basic)
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    rotate_left_la(array, 6);
    cr_assert_eq(array[0], 2);
    cr_assert_eq(array[5], 1);
}

Test(rotate_left_lb, basic)
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    rotate_left_lb(array, 6);
    cr_assert_eq(array[0], 2);
    cr_assert_eq(array[5], 1);
}

Test(rotate_right_la, basic)
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    rotate_right_la(array, 6);
    cr_assert_eq(array[0], 6);
    cr_assert_eq(array[5], 5);
}

Test(rotate_right_lb, basic)
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    rotate_right_lb(array, 6);
    cr_assert_eq(array[0], 6);
    cr_assert_eq(array[5], 5);
}

Test(pa, basic)
{
    int array_a[6] = {1, 2, 3, 4, 5, 6};
    int array_b[6] = {0, 0, 0, 0, 0, 0};

    pa_case(array_a, array_b, 6);
    cr_assert_eq(array_a[0], 2);
}

Test(pb, basic)
{
    int array_b[6] = {1, 2, 3, 4, 5, 6};
    int array_a[6] = {0, 0, 0, 0, 0, 0};

    pb_case(array_a, array_b, 6);
    cr_assert_eq(array_b[0], 2);
}

Test(verif_sort, basic_success)
{
    int array_a[6] = {1, 2, 3, 4, 5, 6};

    cr_assert_eq(verif_sort(array_a, 6), 0);
}

Test(verif_sort, basic_fail)
{
    int array_a[6] = {8, 2, 3, 4, 5, 6};

    cr_assert_eq(verif_sort(array_a, 6), 1);
}

Test(swap_la, basic)
{
    int array_a[6] = {8, 2, 3, 4, 5, 6};
    swap_la(array_a, 6);

    cr_assert_eq(array_a[0], 2);
    cr_assert_eq(array_a[1], 8);
}

Test(swap_lb, basic)
{
    int array_a[6] = {8, 2, 3, 4, 5, 6};
    swap_lb(array_a, 6);

    cr_assert_eq(array_a[0], 2);
    cr_assert_eq(array_a[1], 8);
}

Test(find_smallest_index, basic)
{
    int array_a[6] = {8, 2, 3, 4, 5, 6};

    cr_assert_eq(find_smallest_index(array_a, 6), 1);
}

Test(find_smallest_index_1, basic)
{
    int array_a[6] = {0, 2, 3, 4, 5, 6};

    cr_assert_eq(find_smallest_index(array_a, 6), 0);
}

Test(is_sorted_at_the_end, basic)
{
    int *array_a = malloc(sizeof(int) * 6);
    int *array_b = malloc(sizeof(int) * 6);
    array_a[0] = 8;
    array_a[1] = 5;
    array_a[2] = 4;
    array_a[3] = 9;
    array_a[4] = 1;
    array_a[5] = 3;
    array_a = sort(array_a, array_b, 6, 7);

    cr_assert_eq(verif_sort(array_a, 6), 0);
    free(array_a);
    free(array_b);
}
