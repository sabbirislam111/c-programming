#include<stdio.h>
int main(){
    int T, X;
    scanf("%d %d", &T, &X);

    double A = (float)T / (float)X;
    printf("%lf", A);

    return 0;
}
