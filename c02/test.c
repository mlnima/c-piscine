/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:05:13 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/09 13:43:18 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./repo/ex00/ft_strcpy.c"
#include "./repo/ex01/ft_strncpy.c"
#include "./repo/ex02/ft_str_is_alpha.c"
#include "./repo/ex03/ft_str_is_numeric.c"
#include "./repo/ex04/ft_str_is_lowercase.c"
#include "./repo/ex05/ft_str_is_uppercase.c"
#include "./repo/ex06/ft_str_is_printable.c"
#include "./repo/ex07/ft_strupcase.c"
#include "./repo/ex08/ft_strlowcase.c"
#include "./repo/ex09/ft_strcapitalize.c"
#include "./repo/ex10/ft_strlcpy.c"
#include "./repo/ex11/ft_putstr_non_printable.c"

void	test_ft_strcpy(void)
{
	char	src01[] = "Hello, world!";
	char	dest01[50];

	ft_strcpy(dest01, src01);
	printf("EX00 => Source: %s\n", src01);
	printf("EX00 => Destination: %s\n", dest01);
}

void	test_ft_strncpy(void)
{
	char	src02[] = "Hello, world!";
	char	dest02[50] = {0};

	ft_strncpy(dest02, src02, 7);
	printf("EX01 => Source: %s\n", src02);
	printf("EX01 => Destination: %s\n", dest02);
}

void	test_ft_str_is_alpha(void)
{
	char	test1[] = "HelloWorld";
    char	test2[] = "Hello123";
    char	test3[] = "Hello World";
    char	test4[] = "";

	int	result1 = ft_str_is_alpha(test1);
	int	result2 = ft_str_is_alpha(test2);
	int	result3 = ft_str_is_alpha(test3);
	int	result4 = ft_str_is_alpha(test4);

	printf("EX02 => Test 1 (\"%s\"): %d\n", test1, result1);
	printf("EX02 => Test 2 (\"%s\"): %d\n", test2, result2);
	printf("EX02 => Test 3 (\"%s\"): %d\n", test3, result3);
	printf("EX02 => Test 4 (\"%s\"): %d\n", test4, result4);
}

void test_ft_str_is_numeric(void)
{
	char test1[] = "123465";  // This should be alphabetic
	char test2[] = "Hello123";    // This contains digits
	char test3[] = "Hello World"; // This contains a space
	char test4[] = "Hello World"; // This contains a space
	char test5[] = "562";          
	char test6[] = "";      // Empty string	
	int result1 = ft_str_is_numeric(test1);
	int result2 = ft_str_is_numeric(test2);
	int result3 = ft_str_is_numeric(test3);
	int result4 = ft_str_is_numeric(test4);
	int result5 = ft_str_is_numeric(test5);
	int result6 = ft_str_is_numeric(test6);	
	printf("EX03 => Test 1 (\"%s\"): %d\n", test1, result1);
	printf("EX03 => Test 2 (\"%s\"): %d\n", test2, result2);
	printf("EX03 => Test 3 (\"%s\"): %d\n", test3, result3);
	printf("EX03 => Test 4 (\"%s\"): %d\n", test4, result4);
	printf("EX03 => Test 5 (\"%s\"): %d\n", test5, result5);
	printf("EX03 => Test 6 (\"%s\"): %d\n", test6, result6);
}

void	test_ft_str_is_lowercase(void)
{
	char	test1[] = "hello";
	char	test2[] = "Hello";
	char	test3[] = "world";
	char	test4[] = "world!";
	char	test5[] = "alllowercase";
	char	test6[] = "";
	char	test7[] = "123";

	printf("EX04 => 1: %s -> %d\n", test1, ft_str_is_lowercase(test1));
	printf("EX04 => 2: %s -> %d\n", test2, ft_str_is_lowercase(test2));
	printf("EX04 => 3: %s -> %d\n", test3, ft_str_is_lowercase(test3));
	printf("EX04 => 4: %s -> %d\n", test4, ft_str_is_lowercase(test4));
	printf("EX04 => 5: %s -> %d\n", test5, ft_str_is_lowercase(test5));
	printf("EX04 => 6: %s -> %d\n", test6, ft_str_is_lowercase(test6));
	printf("EX04 => 7: %s -> %d\n", test7, ft_str_is_lowercase(test7));
}

void	test_ft_str_is_uppercase(void)
{
	char	test1[] = "hello";
	char	test2[] = "HELLO";
	char	test3[] = "world";
	char	test4[] = "world!";
	char	test5[] = "alllowercase";
	char	test6[] = "";
	char	test7[] = "123";

	printf("EX05 => Test 1: %s -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("EX05 => Test 2: %s -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("EX05 => Test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("EX05 => Test 4: %s -> %d\n", test4, ft_str_is_uppercase(test4));
	printf("EX05 => Test 5: %s -> %d\n", test5, ft_str_is_uppercase(test5));
	printf("EX05 => Test 6: %s -> %d\n", test6, ft_str_is_uppercase(test6));
	printf("EX05 => Test 7: %s -> %d\n", test7, ft_str_is_uppercase(test7));
}

void	test_ft_str_is_printable(void)
{
	char *test1 = "Hello, World!\n";
	char *test2 = "1234567890";
	char *test3 = " \t\n";
	char *test4 = "";
	char *test5 = "Hello\x7F";
	printf("EX06 => Test 1: %d\n", ft_str_is_printable(test1));
	printf("EX06 => Test 2: %d\n", ft_str_is_printable(test2));
	printf("EX06 => Test 3: %d\n", ft_str_is_printable(test3));
	printf("EX06 => Test 4: %d\n", ft_str_is_printable(test4));
	printf("EX06 => Test 5: %d\n", ft_str_is_printable(test5));
}

void test_ft_strupcase(void)
{
	char	test1[] = "hello, world!";
	char	test2[] = "HELLO, WORLD!";
	char	test3[] = "12345";
	char	test4[] = "";
	char	test5[] = "HeLlO123";
	printf("EX07 => Test 1: %s\n", ft_strupcase(test1));
	printf("EX07 => Test 2: %s\n", ft_strupcase(test2));
	printf("EX07 => Test 3: %s\n", ft_strupcase(test3));
	printf("EX07 => Test 4: %s\n", ft_strupcase(test4));
	printf("EX07 => Test 5: %s\n", ft_strupcase(test5));
}

void test_ft_strlowcase(void)
{
	char	test1[] = "hello, world!";
	char	test2[] = "HELLO, WORLD!";
	char	test3[] = "12345";
	char	test4[] = "";
	char	test5[] = "HeLlO123";
	printf("EX08 => Test 1: %s\n", ft_strlowcase(test1));
	printf("EX08 => Test 2: %s\n", ft_strlowcase(test2));
	printf("EX08 => Test 3: %s\n", ft_strlowcase(test3));
	printf("EX08 => Test 4: %s\n", ft_strlowcase(test4));
	printf("EX08 => Test 5: %s\n", ft_strlowcase(test5));
}

void	test_ft_strcapitalize(void)
{
	char	test1[] = "hello, world!,";
	char	test2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	test3[] = "12345";
	char	test4[] = "";
	char	test5[] = "HeLlO123";
	printf("EX09 => Test 1: %s\n", ft_strcapitalize(test1));
	printf("EX09 => Test 2: %s\n", ft_strcapitalize(test2));
	printf("EX09 => Test 3: %s\n", ft_strcapitalize(test3));
	printf("EX09 => Test 4: %s\n", ft_strcapitalize(test4));
	printf("EX09 => Test 5: %s\n", ft_strcapitalize(test5));
}

void	test_ft_strlcpy(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	char	small_dest[6];	
	unsigned int length;
	length = ft_strlcpy(dest, src, sizeof(dest));
	printf("EX010 => Source: %s\n", src);
	printf("EX010 => Destination (large buffer): %s\n", dest);
	printf("EX010 => Length of source string: %u\n", length);
	length = ft_strlcpy(small_dest, src, sizeof(small_dest));
	printf("EX010 => Destination (small buffer): %s\n", small_dest);
	printf("EX010 => Length of source string: %u\n", length);
	length = ft_strlcpy(dest, src, 0);
	printf("EX010 => Destination (zero-sized buffer): %s\n", dest);
	printf("EX010 => Length of source string: %u\n", length);
}

void	test_ft_putstr_non_printable(void)
{
	char	test_str11[] = "Hello\nWorld\tThis\x7fIs\x01A Test!";

	printf("EX011 => converted: ");
	ft_putstr_non_printable(test_str11);
	printf("\n");

//int	main(void)
//{
//	char	test_str[] = "Hello\nWorld\tThis\x7fIs\x01A Test!";
//	printf("converted: ");
//	ft_putstr_non_printable(test_str);
//	printf("\n");
//	return (0);
//}
}

int	main(void)
{
	test_ft_strcpy();
	printf("__________________________________\n");
	test_ft_strncpy();
	printf("__________________________________\n");
	test_ft_str_is_alpha();
	printf("__________________________________\n");
	test_ft_str_is_numeric();
	printf("__________________________________\n");
	test_ft_str_is_lowercase();
	printf("__________________________________\n");
	test_ft_str_is_uppercase();
	printf("__________________________________\n");
	test_ft_str_is_printable();
	printf("__________________________________\n");
	test_ft_strupcase();
	printf("__________________________________\n");
	test_ft_strlowcase();
	printf("__________________________________\n");
	test_ft_strcapitalize();
	printf("__________________________________\n");
	test_ft_strlcpy();
	printf("__________________________________\n");
	test_ft_putstr_non_printable();
	printf("__________________________________\n");
	return (0);
}
