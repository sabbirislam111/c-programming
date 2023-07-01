#include<stdio.h>
int main(){
int limak, bob;
scanf("%d %d", &limak, &bob);

    int years = 0;
    while(limak != 0 ){

        years++;
        limak *= 3;
        bob *= 2;

        if(limak > bob){
            printf("%d", years);
            break;
        }

    }



    return 0;
}
