#include<stdio.h>
#include<math.h>

double getRoot(double a, double b, double c){
    double D = a*a - 4*a*c;
    return (-b + sqrt(D))/ (2*a);

}

int main(){
 double a, b, c;
 scanf("%lf %lf %lf", &a, &b, &c);

// double rt = getRoot(a, b, c);
// printf("%lf", rt);
printf("lf", getRoot(a, b, c));

}
