#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void let_test(int a,...)
{
	va_list lst;
	va_start(lst,a);
	char ptr1 = va_arg(lst,char);
	printf("address of a is %lu \n",&a);
	printf("address of ptr1 is %lu \n",ptr1);

}
int main()
{
	let_test(4,'a','b','c');
}

