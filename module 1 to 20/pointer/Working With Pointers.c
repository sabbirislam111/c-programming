#include<stdio.h>
int main()
{
    int val = 100;
    int* pval = &val;

    printf("%d\n", val);
    printf("%p Address has value %d\n", pval, *pval);


    val = 200;
    printf("%d\n", val);
    printf("%p Address has value %d\n", pval, *pval);


    *pval = 300;
    printf("%d\n", val);
    printf("%p Address has value %d\n", pval, *pval);


    // change address
    int val_2 = 100;
    pval = &val_2;

    printf("%d\n", val);
    printf("%p Address has value %d\n", pval, *pval);


}
