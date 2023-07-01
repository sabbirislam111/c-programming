#include<stdio.h>
int main(){

int n, sum = 0;
scanf("%d", &n);

    int a = n%10;
    n = n /10;


    int b = n%10;
    n = n /10;


    int c = n%10;
    n = n /10;


    int num1 = a + (10 * b) + (100 * c);


    int num2 = b + (10 * c) + (100 * a);


    int num3 = c + (10 * a) + (100 * b);


    sum = num1 + num2 + num3;
    printf("%d", sum);

 return 0;
}
