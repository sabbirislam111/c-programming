#include<stdio.h>
int ultra_sum(int a, int b, int *sum, int* sub){
    *sum = a + b;
    *sub = a * b;
}

int main(){

    int a =10, b = 20;
    int sum = 0, sub = 0;
    ultra_sum(a, b, &sum, &sub);
    printf("%d %d", sum, sub);

 return 0;
}
