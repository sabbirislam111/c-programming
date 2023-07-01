#include<stdio.h>
#include<stdbool.h>
int * makeSquer(int n){
    int *squ = (int *) malloc(n* sizeof(int));
    for(int i = 0; i < n; i++){
       squ[i] = i*i;
    }
    return squ;
}


int main(){
    int n;
    scanf("%d", &n);



    int *sq;
    sq = makeSquer(n);
    for(int i = 0; i < n; i++){
        printf("%d ", sq[i]);
    }
}
