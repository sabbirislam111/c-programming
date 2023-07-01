#include<stdio.h>
int main(){

    int n, i, x, reserved = 0,untreated= 0 ;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &x);
        if(x > 0){
            reserved+=x;
        }
        else{
            if(reserved <1){
                untreated++;
            }
            else{
                reserved--;
            }
        }
    }
    printf("%d", untreated);

 return 0;
}
