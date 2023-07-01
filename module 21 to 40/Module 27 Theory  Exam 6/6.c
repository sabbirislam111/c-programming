#include<stdio.h>
struct Multiple{
    int sum;
    int prod;
};

struct Multiple value( int a, int b){

 struct Multiple values;
 values.sum = a + b;
 values.prod = a*b;
 return values;

}


int main(){

    int a = 10;
    int b = 20;

    struct Multiple ans = value(a, b);
    printf("sum = %d \nProduct = %d", ans.sum, ans.prod);



}
