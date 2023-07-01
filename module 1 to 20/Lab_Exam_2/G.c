#include<stdio.h>
int main(){

    int a, b, i, count = 0;
    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++){
        if(a <= i && b >= i ){
            count++;
        }
    }
    printf("%d", count);



 return 0;
}
