#include<stdio.h>
int main(){

    int n, i, sum = 0;;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
            sum = sum + (1/i);

        if(i == 1){
            printf("1 + ");
        }
        else if(i == n){
            printf("1/%d", n);
        }
        else{
            printf("1/%d + ", i);
        }
    }


    return 0;
}
