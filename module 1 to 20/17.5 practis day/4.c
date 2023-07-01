#include<stdio.h>

int rotarr(int siz, int arr[]){
    int temp = arr[0];


    for(int i = 1; i < siz; i++){
        arr[i -1] = arr[i];
    }
    arr[siz - 1] = temp;



    for(int i = 0; i < siz; i++){
       printf("%d ", arr[i]);

    }


}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int siz = sizeof(arr)/sizeof(arr[0]);
    rotarr(siz, &arr);


}
