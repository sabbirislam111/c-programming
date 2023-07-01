#include<stdio.h>
int main(){
    /*int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int waret_laft = A - B;
    int water_poured = waret_laft < C ? waret_laft : C;
    C-= water_poured;

   printf("%d", C);*/

   int i;
   scanf("%d", &i);

   int ch;
   for(ch = 1; ch <= i; ch++){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("case %d: %d\n", ch, a + b);
   }

    ////////////////// Tarifa///////////////////

    /*int limit, month;
    scanf("%d %d", &limit, &month);

    int baki;
    for(int j = 1; j <= month; j++){
        int used;
        scanf("%d", &used);

        int month_limit = limit + baki;
        baki = month_limit - used;

    }
    int final_limit = limit + baki;
    printf("%d", final_limit);*/



    ////////////////// Tarifa///////////////////



    return 0;
}
