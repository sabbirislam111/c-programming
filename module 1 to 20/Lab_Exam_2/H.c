#include<stdio.h>
int main(){


    int n;
    scanf("%d",&n);
   int layers = 1;

    while(layers <= n){
        if(layers & 1){
            printf("I hate ");
        }else{
            printf("I love ");
        }

        if(layers < n){
            printf("that ");
        }
        ++layers;
    }
    printf("it \n");


    return 0;
}
