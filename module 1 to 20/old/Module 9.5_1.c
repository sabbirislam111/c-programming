#include<stdio.h>
int main(){

    int A, B;
    scanf("%d %d", &A, &B);

    int both = (2 * A) +100;
    int need = both - B;
    printf("%d", need);


 return 0;
}
