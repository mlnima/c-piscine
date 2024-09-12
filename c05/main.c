#include <stdio.h>
#include "pre/ex00/ft_iterative_factorial.c"
#include "pre/ex01/ft_recursive_factorial.c"
#include "pre/ex02/ft_iterative_power.c"

void test_ft_iterative_factorial()
{
    printf("4! = %d\n", ft_iterative_factorial(4));
    printf("6! = %d\n", ft_iterative_factorial(6));
    printf("5! = %d\n", ft_iterative_factorial(5));
}

void test_ft_recursive_factorial()
{
    printf("720 = %d\n", ft_recursive_factorial(720));
    printf("24 = %d\n", ft_recursive_factorial(24));
    printf("23 = %d\n", ft_recursive_factorial(23));
    printf("5 = %d\n", ft_recursive_factorial(5));
}

void test_ft_iterative_power()
{
    printf("5,5 = %d\n", ft_iterative_power(5,5));
    printf("5,2 = %d\n", ft_iterative_power(5,2));
    printf("4,4 = %d\n", ft_iterative_power(4,4));
    printf("3,3 = %d\n", ft_iterative_power(3,3));
    printf("0,1 = %d\n", ft_iterative_power(0,1));
    printf("1,0 = %d\n", ft_iterative_power(1,0));
    printf("1,1 = %d\n", ft_iterative_power(1,1));
}

int main(void)
{
    printf("__________ex00____________\n");
    test_ft_iterative_factorial();
    printf("__________ex01____________\n");
    test_ft_recursive_factorial();
    printf("__________ex02____________\n");
    test_ft_iterative_power();
}