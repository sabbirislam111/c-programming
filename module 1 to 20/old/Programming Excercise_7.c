#include<stdio.h>
int main(){
    int n, i, j, sum;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
            j= 1;
            sum =0;
       while(i < j){
        if(i%j==0)
            sum = sum + j;
            j++;


       }
       if(sum == i)
            printf("%d ",i);


    }
printf("\n");




    return 0;
}

