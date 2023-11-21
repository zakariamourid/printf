#include <stdio.h>
#include <stdlib.h>
int mlc(int a)
{
    int *b;
    b = malloc(sizeof(int) * 2);
    b[3] = 10;
    return b;
}
int main()
{
    int a =3;
    int b = 3;
    int r = a+b;
    char *rs;
    rs = NULL;
    *rs = 1;
    printf("%s \n",*rs);
    mlc(a);
}