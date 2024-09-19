#include <stdio.h>
#include "./repo/ex00/ft_ft.c"
#include "./repo/ex01/ft_ultimate_ft.c"
#include "./repo/ex02/ft_swap.c"
#include "./repo/ex03/ft_div_mod.c"
#include "./repo/ex04/ft_ultimate_div_mod.c"
#include "./repo/ex05/ft_putstr.c"
#include "./repo/ex06/ft_strlen.c"
#include "./repo/ex07/ft_rev_int_tab.c"
#include "./repo/ex08/ft_sort_int_tab.c"


void print_array(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}



void	test_ft_ft(void)
{
	int	number;

	number = 0; 
	printf ("Before %d\n", number); 
	ft_ft (&number);
	printf ("after %d\n", number); 
}

void test_ft_ultimate_ft(void)
{
    int value = 0;
    int *p1 = &value;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;

    printf("Before: %d\n", value);
    ft_ultimate_ft(p9);
    printf("After: %d\n", value);
}

void test_ft_swap(void)
{
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
}


void test_ft_div_mod(void)
{
    int a = 10;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("For a = %d and b = %d\n", a, b);
    printf("Division result: %d\n", div);
    printf("Modulus result: %d\n", mod);
}

void test_ft_ultimate_div_mod(void)
{
    int a = 10;
    int b = 3;

    printf("Before: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("After: a = %d, b = %d\n", a, b);
}

void test_ft_putstr(void)
{
    char str1ex05[] = "_____ex05_____";
    char str2ex05[] = "Hello, Norminette!";

    ft_putstr(str1ex05);
    ft_putstr(str2ex05);
}


void test_ft_strlen(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "";
    char str3[] = "Norminette";

    printf("Length of '%s': %d\n", str1, ft_strlen(str1));
    printf("Length of '%s': %d\n", str2, ft_strlen(str2));
    printf("Length of '%s': %d\n", str3, ft_strlen(str3));
}

void test_ft_rev_int_tab(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50, 60};
    int arr3[] = {7, 8, 9};

    printf("Original arr1: ");
    print_array(arr1, 5);
    ft_rev_int_tab(arr1, 5);
    printf("Reversed arr1: ");
    print_array(arr1, 5);

    printf("Original arr2: ");
    print_array(arr2, 6);
    ft_rev_int_tab(arr2, 6);
    printf("Reversed arr2: ");
    print_array(arr2, 6);

    printf("Original arr3: ");
    print_array(arr3, 3);
    ft_rev_int_tab(arr3, 3);
    printf("Reversed arr3: ");
    print_array(arr3, 3);
}

void test_ft_sort_int_tab(void)
{
    int arr1[] = {5, 3, 1, 4, 2};
    int arr2[] = {10, 20, 15, 30, 25, 5};
    int arr3[] = {7, 8, 9};
    int arr4[] = {1}; // Single element array
    int arr5[] = {}; // Empty array

    printf("Original arr1: ");
    print_array(arr1, 5);
    ft_sort_int_tab(arr1, 5);
    printf("Sorted arr1: ");
    print_array(arr1, 5);

    printf("Original arr2: ");
    print_array(arr2, 6);
    ft_sort_int_tab(arr2, 6);
    printf("Sorted arr2: ");
    print_array(arr2, 6);

    printf("Original arr3: ");
    print_array(arr3, 3);
    ft_sort_int_tab(arr3, 3);
    printf("Sorted arr3: ");
    print_array(arr3, 3);

    printf("Original arr4: ");
    print_array(arr4, 1);
    ft_sort_int_tab(arr4, 1);
    printf("Sorted arr4: ");
    print_array(arr4, 1);

    printf("Original arr5: ");
    print_array(arr5, 0);
    ft_sort_int_tab(arr5, 0);
    printf("Sorted arr5: ");
    print_array(arr5, 0);
}

int	main(void)
{
	printf("\n_____ex00_____\n");
	test_ft_ft();
	printf("_____ex01_____\n");
	test_ft_ultimate_ft();
	printf("_____ex02_____\n");
	test_ft_swap();
	printf("_____ex03_____\n");
	test_ft_div_mod();
	printf("_____ex04_____\n");
	test_ft_ultimate_div_mod();
	printf("_____ex05_____\n");
	test_ft_putstr();
	printf("_____ex06_____\n");
	test_ft_strlen();
	printf("_____ex07_____\n");
	test_ft_rev_int_tab();
	printf("_____ex08_____\n");
	test_ft_sort_int_tab();
	return (0);
}

