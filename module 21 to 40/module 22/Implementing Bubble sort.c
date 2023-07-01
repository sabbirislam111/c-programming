#include<stdio.h>

void swap(int *a, int * b){
    int temp = *a;
          *a = *b;
          *b = temp;
}

void srt(int n, int arr[]){
    for(int step = 0; step < n; step++){

        for(int i = 0; i+1 <n; i++){
            if(arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
        }

    }
}


int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    srt(n, arr);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}

