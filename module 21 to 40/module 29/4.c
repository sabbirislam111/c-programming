#include<stdio.h>
#include<string.h>

int main(){

    int n, temp;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        arr2[i] = arr[i];
        //printf("%d ", arr2[i]);

    }


    for(int i = 0, j = n-1; i < j; i++, j--){


        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;



    }



    for(int i = 0; i < n; i++){
            if(arr[i] < arr2[i]){
              printf("%d  ", arr2[i] - arr[i]);
            }
            if(arr[i] > arr2[i]){
              printf("%d  ", arr[i] - arr2[i]);
            }
            if(arr[i] == arr2[i]){
              printf("%d  ", arr[i] - arr2[i]);
            }



    }


}
