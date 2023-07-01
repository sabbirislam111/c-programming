#include<stdio.h>
int main(){

int a, b, c;
scanf("%d %d %d", &a, &b, &c);

int sum1= a+ b, sum2= b+c, sum3= c +a;

    if(sum1 < sum2 && sum1 < sum3){
        printf("%d", sum1);
    }
    else if( sum2 < sum1 && sum2 < sum3){
        printf("%d", sum2);
    }
    else{
        printf("%d", sum3);
    }


 return 0;
}
