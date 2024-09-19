#include <stdio.h>
#include "./repo/ex00/ft_strlen.c"
#include "./repo/ex01/ft_putstr.c"
#include "./repo/ex02/ft_putnbr.c"
#include "./repo/ex03/ft_atoi.c"

void test_ft_strlen(){
	char ex00_str[] = "a";
	printf("\nthe string has %d length \n",ft_strlen(ex00_str));
}

void test_ft_putstr(){
	char ex01_str[] = "hello world\n";
	ft_putstr(ex01_str);
}

void test_ft_putnbr(){
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-15);
}

void test_ft_atoi(){
	char	*ex03_test1 = " ---+--+1234ab567";
	char	*ex03_test2 = " -a-67 asasf";
	char	*ex03_test3 = " -	-67 asasf";
	char	*ex03_test4 = " -ujuhj--+34-ab567";
	printf("final result: %d\n", ft_atoi(ex03_test1));
	printf("final result: %d\n", ft_atoi(ex03_test2));
	printf("final result: %d\n", ft_atoi(ex03_test3));
	printf("final result: %d\n", ft_atoi(ex03_test4));
}

int	main(void){
	printf("\n_______________EX00_____________________\n");
	test_ft_strlen();
	//printf("\n_______________EX01^_____________________\n");
	test_ft_putstr();
	printf("\n_______________EX02_____________________\n");
	test_ft_putnbr();
	printf("\n_______________EX03_____________________\n");
	test_ft_atoi();
	return (0);
}
