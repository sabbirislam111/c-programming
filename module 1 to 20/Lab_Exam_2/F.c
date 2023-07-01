#include<stdio.h>
int main(){

int h, w, i, j;
scanf("%d %d", &h, &w);

    for(i = 1; i <= h; i++){

        for(j = 1; j<=w; j++){

           if(i%2==0){

                //printf("%d", j);


                if(j == w && i % 4 != 0){

                    printf("#");
                }
                else if(j == 1 && i % 4 == 0){
                    printf("#");
                }
                else{
                    printf(".");
                }


           }
           else{
            printf("#");
           }
        }
        printf("\n");
    }



 return 0;
}
