#include<stdio.h>
int main(){

    int A, B;
    scanf("%d %d", &A, &B);
    int curtains = B*2;
    //printf("%d", B);
    int uncovered = A - curtains;

     if(uncovered <= 0 ){
        printf("0");
    }
    else if(A > uncovered){
        printf("%d", uncovered);
    }


 return 0;
}
