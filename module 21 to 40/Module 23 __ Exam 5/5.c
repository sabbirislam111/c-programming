#include<stdio.h>

//void swap(int* a, int* b){
//        int temp = *a;
//            *a = *b;
//            *b = temp;
//
//}



void srted(int siz, int arr[]){
int numOfSwap = 0;
    for(int steps = 0; steps < siz; steps++){

        for(int i = 0; i+1 < siz; i++){
            if(arr[i] < arr[i+1]){
                swap(&arr[i+1], &arr[i]);

            }
        }

    }

}





int main(){
    int numOfSwap = 0;
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    srted(n, arr);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }




}
