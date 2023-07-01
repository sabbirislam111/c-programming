#include<stdio.h>
int main()
{
    int a = 20;

    int * p = &a;

    printf("%lld\n", p);


    p++;
     printf("%lld", p);


}
