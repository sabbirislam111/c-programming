#include<stdio.h>
int main(){
    int i, n, p, q, diff, aveil = 0, need = 2;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &p, &q);


        if(q > p){
            diff = q - p;

             if(diff > need){
               aveil += 1;
            }

        }


    }
        printf("%d", aveil);



    return 0;
}
