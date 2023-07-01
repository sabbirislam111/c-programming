#include<stdio.h>
int main(){

    int  k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int sum = 0;
    int borrow;
    for(int i = 1; i <= w; i++){
        int product = i * k;
        sum += product;
    }
        if (n < sum){
            borrow = (sum - n);
            printf("%d", borrow);
        }
        else{
            printf("0");
        }

    return 0;
}
