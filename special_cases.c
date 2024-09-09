/*
** EPITECH PROJECT, 2019
** specases
** File description:
** azdaz
*/

#include <stdarg.h>
#include "my.h"

int special_up_s(char *yolo)
{
    int i;
    char a;

    i = 0;
    while (yolo[i] != '\0') {
        if (yolo[i] < 32 ||
         yolo[i] >= 127) {
            my_putchar(92);
            a = yolo[i];
            special_o(6);
            i = i + 1;
        } else {
            my_putchar(yolo[i]);
            i = i + 1;
        }
    }
    return 0;
}

int special_o(int yolo)
{
    long quo;
    int octal[100];
    int i , j;

    i = 1;
    quo = yolo;
    j = 0;
    while (quo != 0){
        octal[i++] = quo % 8;
        quo = quo / 8;
    }
    if (i == 2)
        my_putstr("00");
    if (i == 3)
        my_putchar('0');
    for (j = i - 1; j > 0; j--){
        my_put_nbr(octal[j]);
    }
    return 0;
}

int special_b(int yolo)
{
    int c, k;

    for (c = 31; c >= 0; c--){
        k = yolo >> c;

        if (k & 1)
            my_putchar('1');
        else
            my_putchar('0');
    }
    return 0;
}
