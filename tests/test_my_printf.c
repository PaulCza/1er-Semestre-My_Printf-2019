/*
** EPITECH PROJECT, 2019
** test_my_printf
** File description:
** azfz
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"
void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("Hello");
    cr_assert_stdout_eq_str("Hello");
}

Test(my_printf, c_rule, .init = redirect_all_std)
{
    my_printf("And your next char is :%c", 'a');
    cr_assert_stdout_eq_str("And your next char is :a",);
}

Test(my_printf, i_rule, .init = redirect_all_std)
{
    my_printf("And your next int is :%i", 23);
    cr_assert_stdout_eq_str("And your next int is :23");
}

Test(my_printf, o_rule_three_digits, .init = redirect_all_std)
{
    my_printf("And your next octal is :%o", 68);
    cr_assert_stdout_eq_str("And your next octal is :104");
}

Test(my_printf, s_rule, .init = redirect_all_std)
{
    my_printf("And your next string is :%s", "Hello World");
    cr_assert_stdout_eq_str("And your next string is :Hello World");
}
Test(my_printf, b_rule, .init = redirect_all_std)
{
    my_printf("Andint is :%b", 23);
    cr_assert_stdout_eq_str("Andint is : 00000000000000000000000000010111");
}

Test(my_printf, S_rule, .init = redirect_all_std)
{
    my_printf("And your next string is :%S", "toto");
    cr_assert_stdout_eq_str("And your next string is :toto");
}
Test(my_printf, o_rule_1_digit, .init = redirect_all_std)
{
    my_printf("And your next octal is :%o", 6);
    cr_assert_stdout_eq_str("And your next octal is :006");
}
Test(my_printf, mixed, .init = redirect_all_std)
{
    my_printf("%s", "^%s%dAstek42%$");
    cr_assert_stdout_eq_str("^%s%dAstek42%$");
}
Test(my_printf,test, .init = redirect_all_std)
{
    my_printf("%s%d%i%s%b", "Salut\n", 42, 44, "Me\n", 66);
    cr_assert_stdout_eq_str("Salut\n4244Me\n00000000000000000000000001000010");
}
Test(my_printf,n_flag, .init = redirect_all_std)
{
    my_printf("Salut%n");
    cr_assert_stdout_eq_str("Salut5");
}
Test(my_printf,u_flag_simple, .init = redirect_all_std)
{
    my_printf("%u", 4345);
    cr_assert_stdout_eq_str("4345");
}
Test(my_printf,u_flag_hard, .init = redirect_all_std)
{
    my_printf("%u", 434543454345);
    cr_assert_stdout_eq_str("434543454345");
}
Test(my_printf,n_flag_mixed, .init = redirect_all_std)
{
    my_printf("%s", "%^£*dz£#");
    cr_assert_stdout_eq_str("%^£*dz£#");
}
Test(my_printf, x_flag, .init = redirect_all_std)
{
    my_printf("%x", 75);
    cr_assert_stdout_eq_str("4B");
}