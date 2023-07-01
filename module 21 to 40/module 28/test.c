#include<stdio.h>
int main(){

    int n;
    int arr[] = {50, 50, 30, 50, 40, 50};


     int temp;
    int count = 0;
    int max = arr[0];
    int max2 = arr[0];
    for(int i = 1; i <= 6; i++){

        if(max < arr[i]){
            max = arr[i];
        }
          if(max == arr[i-1]){
                count++;

            }
        if(max < arr[i]){
            max = arr[i];
        }

    }




    printf("%d\n", max);
    printf("%d\n", count);


}
