#include<stdio.h>
double make_sum(double a, double b){
    double sum = a + b;
    return sum;
}

int main(){

    double a = 10.57;
    double b = 20.50;

    double sum = make_sum(a, b);
    printf("%.2f\n", sum);



  return 0;

}
