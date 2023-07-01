#include<stdio.h>
int main(){

    int A, B, C;
     scanf("%d %d %d", &A, &B, &C);

     if(B>C && C >A){
        printf("Yes");
     }
     else if(A == B && B == C && C == A){
        printf("Yes");
     }
     else{
        printf("No");
     }

return 0;
}
