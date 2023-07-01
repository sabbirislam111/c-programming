#include<stdio.h>
int main(){

    int num, last_number, revarce = 0;
    scanf("%d", &num);

    while(num > 0){
        last_number = num%10;
        revarce = revarce* 10 + last_number;
        num /= 10;

    }
    printf("%d", revarce);








    return 0;
}
