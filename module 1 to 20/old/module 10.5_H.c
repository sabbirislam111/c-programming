#include<stdio.h>
int main(){

    int n, i;
    double sum = 0.0;
    double  volume, amount;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%lf", &amount);
        sum += amount;
        volume = sum / i;

    }

    printf("%.12lf ", volume);





    return 0;
}
