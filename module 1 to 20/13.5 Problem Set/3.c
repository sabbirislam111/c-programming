#include<stdio.h>
int main(){

    int arr[7] = { 10, 20, 50, 40, 50, 30, 40};

    int max, i;
    int timr_of_max = 0;

    for(i = 0; i < 7; i++){

        if(arr[0] < arr[i]){
            arr[0] = arr[i];
            timr_of_max++;

        }

    }
    printf("Largest number = %d\n", arr[0]);
    printf("Maximum occurs %d times", timr_of_max);




 return 0;
}
