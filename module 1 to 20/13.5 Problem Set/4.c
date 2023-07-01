#include<stdio.h>
int main(){

    int arr[10] = {-7, 2, 3, 8, 6, 6,76, 38, 3, 2};

    int max,max2, i, ran;

    max = 0;
    max2 = 1;

         if(max < max2){
            ran = max;
            max = max2;
            max2 = ran;
         }
         for(i = 2; i < 10; i++){

            if(arr[i] >= max){
                max2 = max;
                max = arr[i];
            }
            else if(arr[i] >= max2){
                max2 = arr[i];
            }
         }


  printf(" second Largest number = %d\n", max2);




 return 0;
}

