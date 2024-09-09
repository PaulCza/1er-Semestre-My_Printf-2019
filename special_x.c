/*
** EPITECH PROJECT, 2019
** special_x
** File description:
** dzaz
*/

#include "my.h"

void special_u(unsigned int a)
{
    my_put_nbr(a);
}
void special_n(int a)
{
    my_put_nbr(a);
}
void case_x(int a, int b)
{
    int quotient, remainder;
    int j;
    char hexa[100];

    quotient = a;
    j = 0;

    while (quotient != 0) {
        remainder = quotient % 16;
        if (remainder < 10)
            hexa[j++] = 48 + remainder;
        else
            hexa[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    for (b = j; b >= 0; b--){
        my_putchar(hexa[b]);
    }
}