#include<stdio.h>
int main(){
    int n;

    while(n != 42){
        scanf("%d", &n);
        if(n == 42){
            break;
        }
        printf("%d\n", n);
    }

 return 0;
}
