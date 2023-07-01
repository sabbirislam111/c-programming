#include<stdio.h>
void target(int a, int b, int *sum, int * product){
  *sum = a + b;
  *product = a * b;


}
int main(){
int a, b;
scanf("%d %d", &a, &b);

int x, y;

target(a, b, &x, &y);
printf("sum = %d\nproduct = %d\n", x, y);


}
