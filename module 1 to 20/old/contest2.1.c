#include<stdalign.h>
int main(){

int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int waret_laft = A - B;
    int water_poured = waret_laft < C ? waret_laft : C;
    C-= water_poured;

   printf("%d", C);


return 0;
}
