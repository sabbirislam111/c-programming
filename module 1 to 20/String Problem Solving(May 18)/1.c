#include<stdio.h>
int frq[2001];
int main(){

    int n, num, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &num);
        frq[num]++;
        //printf("%d\n", frq[num]);
    }

    for(i = 0; i < 2000; i++){

            if(frq[i] == 0){
               printf("%d ",i);
               break;
            }

    }



}
