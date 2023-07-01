#include<stdio.h>
int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    int last_digit;
    for(int i = 0; i < b; i++){
        last_digit = a % 10;
        if(last_digit == 0){
        a /= 10;
        }
        else{
            a--;
        }


    }
     printf("%d\n", a);


    return 0;
}
