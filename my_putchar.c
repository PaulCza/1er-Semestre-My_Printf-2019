/*
** EPITECH PROJECT, 2019
** sum_stdarg.c
** File description:
** bootstrap printf
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
