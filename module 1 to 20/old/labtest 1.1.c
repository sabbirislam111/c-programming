#include<stdio.h>
int main(){

    int num;
        scanf("%d", &num);
        double sum = 0;
        for(int i = 1; i <= num; i++){

            double num1, num2;
            scanf("%lf %lf", &num1, &num2);

            double multi = (double)num1 * (double)num2;
            sum = sum + multi;

        }
        printf("%.3lf", sum);


    return 0;
}
