#include <string.h>
#include <stdio.h>

#include "./repo/ex00/ft_strcmp.c"
#include "./repo/ex01/ft_strncmp.c"
#include "./repo/ex02/ft_strcat.c"
#include "./repo/ex03/ft_strncat.c"
#include "./repo/ex04/ft_strstr.c"
#include "./repo/ex05/ft_strlcat.c"

void test_ft_strcmp(void){
	char ex00str1[] = "Hello";
	char ex00str2[] = "Hello";
	char ex00str3[] = "HelLo";
	char ex00str4[] = "Hell";
	char ex00str5[] = "Hello, World!";

	printf("1Comparing '%s' and '%s': %d\n", ex00str1, ex00str2, ft_strcmp(ex00str1, ex00str2));
	printf("1Comparing '%s' and '%s': %d\n", ex00str1, ex00str2, strcmp(ex00str1, ex00str2));
	printf("2Comparing '%s' and '%s': %d\n", ex00str1, ex00str4, ft_strcmp(ex00str1, ex00str4));
	printf("2Comparing '%s' and '%s': %d\n", ex00str1, ex00str4, strcmp(ex00str1, ex00str4));
	printf("3Comparing '%s' and '%s': %d\n", ex00str1, ex00str5, ft_strcmp(ex00str1, ex00str5));
	printf("3Comparing '%s' and '%s': %d\n", ex00str1, ex00str5, strcmp(ex00str1, ex00str5));
	printf("4Comparing '%s' and '%s': %d\n", ex00str1, ex00str3, ft_strcmp(ex00str1, ex00str3));
	printf("4Comparing '%s' and '%s': %d\n", ex00str1, ex00str3, strcmp(ex00str1, ex00str3));
}

void test_ft_strncmp() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "HelLo";
    char str4[] = "Hell";
    char str5[] = "Hello, World!";
    char str6[] = "";
    char str7[] = "Hi";

    printf("Test 1: '%s' vs '%s', n=5: %d (ft) | %d (orig)\n", str1, str2, ft_strncmp(str1, str2, 5), strncmp(str1, str2, 5));
    printf("Test 2: '%s' vs '%s', n=4: %d (ft) | %d (orig)\n", str1, str3, ft_strncmp(str1, str3, 4), strncmp(str1, str3, 4));
    printf("Test 3: '%s' vs '%s', n=5: %d (ft) | %d (orig)\n", str1, str4, ft_strncmp(str1, str4, 5), strncmp(str1, str4, 5));
    printf("Test 4: '%s' vs '%s', n=10: %d (ft) | %d (orig)\n", str1, str5, ft_strncmp(str1, str5, 10), strncmp(str1, str5, 10));
    printf("Test 5: '%s' vs '%s', n=0: %d (ft) | %d (orig)\n", str1, str5, ft_strncmp(str1, str5, 0), strncmp(str1, str5, 0));
    printf("Test 6: '%s' vs '%s', n=2: %d (ft) | %d (orig)\n", str6, str7, ft_strncmp(str6, str7, 2), strncmp(str6, str7, 2));
    printf("Test 7: '%s' vs '%s', n=2: %d (ft) | %d (orig)\n", str7, str6, ft_strncmp(str7, str6, 2), strncmp(str7, str6, 2));
}

void test_ft_strcat(){
	char ex02dest[] = "Hello";
	char ex02src[] = " world";
	char ex02dest2[] = "Hello";
	char ex02src2[] = " world";

	printf("concating '%s' and '%s'", ex02dest, ex02src);
	printf("1result: '%s'\n", ft_strcat(ex02dest, ex02src));
	printf("2result: '%s'\n", ft_strcat(ex02dest2, ex02src2));
}

void test_ft_strncat() {
    char dest1[50] = "Hello ";
    char dest2[50] = "Hello ";
    char src1[] = "World!-";
    unsigned int nb1 = 7; // Length of src1

    char dest3[50] = "Hello ";
    char dest4[50] = "Hello ";
    char src2[] = "World!";
    unsigned int nb2 = 6; // Length of src2

    char dest5[50] = "Hello ";
    char dest6[50] = "Hello ";
    char src3[] = "World!";
    unsigned int nb3 = 0; // No characters to append

    char dest7[15] = "Hello "; // Dest is smaller, not enough space for all
    char dest8[15] = "Hello ";
    char src4[] = "World!";
    unsigned int nb4 = 10; // More characters than space

    char dest9[50] = ""; // Empty dest
    char dest10[50] = "";
    char src5[] = "World!";
    unsigned int nb5 = 6; // Length of src5

    char dest11[50] = "Hello"; // Dest is not empty
    char dest12[50] = "Hello";
    char src6[] = ""; // Empty src
    unsigned int nb6 = 1; // Attempt to append 1 character (which does not exist)

    // Test 1: Normal case
    printf("Test 1: Custom ft_strncat result: \"%s\"\n", ft_strncat(dest1, src1, nb1));
    printf("Test 1: Standard strncat result: \"%s\"\n", strncat(dest2, src1, nb1));
    printf("------------------------------------------------\n");

    // Test 2: `nb` less than `src` length
    printf("Test 2: Custom ft_strncat result: \"%s\"\n", ft_strncat(dest3, src2, nb2));
    printf("Test 2: Standard strncat result: \"%s\"\n", strncat(dest4, src2, nb2));
    printf("------------------------------------------------\n");

    // Test 3: `nb` equals 0
    printf("Test 3: Custom ft_strncat result: \"%s\"\n", ft_strncat(dest5, src3, nb3));
    printf("Test 3: Standard strncat result: \"%s\"\n", strncat(dest6, src3, nb3));
    printf("------------------------------------------------\n");

    // Test 4: Not enough space in `dest`
    printf("Test 4: Custom ft_strncat result: \"%s\"\n", ft_strncat(dest7, src4, nb4));
    printf("Test 4: Standard strncat result: \"%s\"\n", strncat(dest8, src4, nb4));
    printf("------------------------------------------------\n");

    // Test 5: Empty `src`
    printf("Test 5: Custom ft_strncat result: \"%s\"\n", ft_strncat(dest9, src5, nb5));
    printf("Test 5: Standard strncat result: \"%s\"\n", strncat(dest10, src5, nb5));
    printf("------------------------------------------------\n");

    // Test 6: Empty `dest`
    printf("Test 6: Custom ft_strncat result: \"%s\"\n", ft_strncat(dest11, src6, nb6));
    printf("Test 6: Standard strncat result: \"%s\"\n", strncat(dest12, src6, nb6));
}

void test_ft_strstr(){
    char *str1 = "Hellowo, world! this is a c lang test";
    char *substr1 = "world";
    char *substr2 = "this";
    char *str2 = "C programming";
    char *substr3 = "program";
    char *substr4 = "Java";

    // First test case
    printf("Testing with string: \"%s\" and substring: \"%s\"\n", str1, substr1);
    printf("Custom ft_strstr result: \"%s\"\n", ft_strstr(str1, substr1) ? ft_strstr(str1, substr1) : "NULL");
    printf("Standard strstr result: \"%s\"\n", strstr(str1, substr1) ? strstr(str1, substr1) : "NULL");
    printf("------------------------------------------------\n");

    // Second test case
    printf("Testing with string: \"%s\" and substring: \"%s\"\n", str1, substr2);
    printf("Custom ft_strstr result: \"%s\"\n", ft_strstr(str1, substr2) ? ft_strstr(str1, substr2) : "NULL");
    printf("Standard strstr result: \"%s\"\n", strstr(str1, substr2) ? strstr(str1, substr2) : "NULL");
    printf("------------------------------------------------\n");

    // Third test case
    printf("Testing with string: \"%s\" and substring: \"%s\"\n", str2, substr3);
    printf("Custom ft_strstr result: \"%s\"\n", ft_strstr(str2, substr3) ? ft_strstr(str2, substr3) : "NULL");
    printf("Standard strstr result: \"%s\"\n", strstr(str2, substr3) ? strstr(str2, substr3) : "NULL");
    printf("------------------------------------------------\n");

    // Fourth test case
    printf("Testing with string: \"%s\" and substring: \"%s\"\n", str2, substr4);
    printf("Custom ft_strstr result: \"%s\"\n", ft_strstr(str2, substr4) ? ft_strstr(str2, substr4) : "NULL");
    printf("Standard strstr result: \"%s\"\n", strstr(str2, substr4) ? strstr(str2, substr4) : "NULL");
    printf("------------------------------------------------\n");
}

size_t strlcat(char *dst, const char *src, size_t dstsize);

void test_ft_strlcat(void) {
     // Test 1: Normal case with sufficient space
    char dest1[20] = "hello";
    char src1[] = " world";
    unsigned int size1 = sizeof(dest1);
    unsigned int result1;

    result1 = ft_strlcat(dest1, src1, size1);
    printf("Test 1\n");
    printf("Expected: %zu (\"hello world\")\n", strlen("hello") + strlen(" world"));
    printf("Result: %u (\"%s\")\n\n", result1, dest1);

    // Test 2: Destination buffer is exactly large enough
    char dest2[12] = "hello";
    char src2[] = " world";
    unsigned int size2 = sizeof(dest2);
    unsigned int result2;

    result2 = ft_strlcat(dest2, src2, size2);
    printf("Test 2\n");
    printf("Expected: %zu (\"hello world\")\n", strlen("hello") + strlen(" world"));
    printf("Result: %u (\"%s\")\n\n", result2, dest2);

    // Test 3: Destination buffer is too small to hold the concatenated result
    char dest3[10] = "hello";
    char src3[] = " world";
    unsigned int size3 = sizeof(dest3);
    unsigned int result3;

    result3 = ft_strlcat(dest3, src3, size3);
    printf("Test 3\n");
    printf("Expected: %zu (\"hello world\")\n", strlen("hello") + strlen(" world"));
    printf("Result: %u (\"%s\")\n\n", result3, dest3);

    // Test 4: Empty source string
    char dest4[20] = "hello";
    char src4[] = "";
    unsigned int size4 = sizeof(dest4);
    unsigned int result4;

    result4 = ft_strlcat(dest4, src4, size4);
    printf("Test 4\n");
    printf("Expected: %zu (\"hello\")\n", strlen("hello"));
    printf("Result: %u (\"%s\")\n\n", result4, dest4);

    // Test 5: Empty destination string
    char dest5[20] = "";
    char src5[] = "world";
    unsigned int size5 = sizeof(dest5);
    unsigned int result5;

    result5 = ft_strlcat(dest5, src5, size5);
    printf("Test 5\n");
    printf("Expected: %zu (\"world\")\n", strlen("world"));
    printf("Result: %u (\"%s\")\n\n", result5, dest5);

    // Test 6: Source string larger than destination buffer
    char dest6[10] = "foo";
    char src6[] = "barbaz";
    unsigned int size6 = sizeof(dest6);
    unsigned int result6;

    result6 = ft_strlcat(dest6, src6, size6);
    printf("Test 6\n");
    printf("Expected: %zu (\"foobarbaz\")\n", strlen("foo") + strlen("barbaz"));
    printf("Result: %u (\"%s\")\n\n", result6, dest6);

    // Test 7: Destination buffer is exactly the size of the source string
    char dest7[6] = "1234";
    char src7[] = "56";
    unsigned int size7 = sizeof(dest7);
    unsigned int result7;

    result7 = ft_strlcat(dest7, src7, size7);
    printf("Test 7\n");
    printf("Expected: %zu (\"123456\")\n", strlen("1234") + strlen("56"));
    printf("Result: %u (\"%s\")\n\n", result7, dest7);

}

int main(void)
{
	printf("_______________EX00_____________________\n");
	test_ft_strcmp();
	printf("_______________EX01_____________________\n");
	test_ft_strncmp();
	printf("_______________EX02_____________________\n");
	test_ft_strcat();
	printf("_______________EX03_____________________\n");
	test_ft_strncat();
	printf("_______________EX04___________________\n");
	test_ft_strstr();
	printf("_______________EX05___________________\n");
	test_ft_strlcat();
	return (0);
}
