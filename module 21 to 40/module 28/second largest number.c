#include<stdio.h>


int main(){

    //int n;
    int number[] = {50, 60, 65, 50, 70, 50};
    int n = sizeof(number)/sizeof(number[0]);
    int i, j, a;

     int temp;



    for (i=0; i<n; ++i){
      for (j=i+1; j<n; ++j){
         if (number[i] < number[j]){
            a = number[i];
            number[i] = number[j];
            number[j] = a;
         }
      }
   }

    int max2;
    for(int i = 0, j = 0;i < n; i++, j++){
            //printf("%d ", number[i]);
        if(number[i] != number[j+1]){
            max2 = number[j+1];
            printf("%d\n", max2);
            break;

          }


    }





return 0;

}

