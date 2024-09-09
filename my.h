/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** dad
*/

#include <stdarg.h>

int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char* my_strdup(char* str);
int special_case(va_list yolo, char *test, int a);
int my_printf(const char *format, ...);
int special_o(int yolo);
int special_b(int yolo);
void case_x(int a, int b);
void special_n(int a);
void special_u(unsigned int a);