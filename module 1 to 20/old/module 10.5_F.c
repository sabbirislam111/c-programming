#include<stdio.h>
#include <math.h>
int main(){

    int a, b;
    int count,dif, i, power;
    scanf("%d %d", &a, &b);

    if( a > b){
         dif = a -b;

        for( i = 1; i  <= dif; i++){
          count = 32;
        while(a > b){
           power = pow(count, i);

           break;
        }


        }
        printf("%d", power);



    }
    else{
        printf("1");
    }


    return 0;
}
