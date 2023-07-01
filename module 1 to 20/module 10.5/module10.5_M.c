#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    if(n >= 1 && 125 >= n){
        printf("4");
    }
    else if(n >= 126 && 211 >= n){
        printf("6");
    }
    else if(n >= 211 && 214 >= n){
        printf("8");
    }



 return 0;
}
