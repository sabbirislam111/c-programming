#include<stdio.h>
void addition(int a, int b, int * sum){

    *sum = a + b;

}

int main(){
int a, b;
scanf("%d %d", &a, &b);

int sum = 0;
addition(a, b, &sum);
printf("sum = %d", sum);

}
