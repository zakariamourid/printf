#include "libprintf.h"

int main() {
    // Test for %c format specifier
    // char c = 'A';
    // int count_c = ft_printf("Character = %c", c);
    // printf("\n");
    // int count2_c = printf("Character = %c", c);
    // printf("\n");
    // printf("Your printf count for %c: %d\n", c, count_c);
    // printf("Standard printf count for %c: %d\n\n", c, count2_c);

    // // Test for %s format specifier
    // const char* str = "Hello, World!";
    // int count_s = ft_printf("String = %s", str);
    // printf("\n");
    // int count2_s = printf("String = %s", str);
    // printf("\n");
    // printf("Your printf count for %s: %d\n", str, count_s);
    // printf("Standard printf count for %s: %d\n\n", str, count2_s);
    // // Test for %d and %i format specifiers
    // int num = 42;
    // int count_di = ft_printf("Integer = %d, %i", num, num);
    // printf("\n");
    // int count2_di = printf("Integer = %d, %i", num, num);
    // printf("\n");
    // printf("Your printf count for %d and %i: %d\n", num, num, count_di);
    // printf("Standard printf count for %d and %i: %d\n\n", num, num, count2_di);

    // // Test for %x format specifier
    // int hex_num = 255;
    // int count_x = ft_printf("Hexadecimal = %x", hex_num);
    // printf("\n");
    // int count2_x = printf("Hexadecimal = %x", hex_num);
    // printf("\n");
    // printf("Your printf count for %x: %d\n", hex_num, count_x);
    // printf("Standard printf count for %x: %d\n\n", hex_num, count2_x);

    // // Test for %X format specifier
    // int hex_num_upper = 255;
    // int count_X = ft_printf("Uppercase Hexadecimal = %X", hex_num_upper);
    // printf("\n");
    // int count2_X = printf("Uppercase Hexadecimal = %X", hex_num_upper);
    // printf("\n");
    // printf("Your printf count for %X: %d\n", hex_num_upper, count_X);
    // printf("Standard printf count for %X: %d\n\n", hex_num_upper, count2_X);
	int a =3;
	// printf("%p",&a);
	// printf("\n");
	int b = ft_printf("%p",&a);
	printf("\n");
	int c = printf("%p",&a);
	printf("\n"); 
	printf("%"); 
	 printf("llu =%llu",&a);
	printf("\n");
	printf("%d\n",b);
	printf("%d\n",c);
}