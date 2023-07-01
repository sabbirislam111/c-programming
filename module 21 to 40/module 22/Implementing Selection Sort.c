#include<stdio.h>
//int min(int a, int b){
//    return a < b ? a : b;
//
//}

void swap(int *a, int * b){
    int temp = *a;
          *a = *b;
          *b = temp;
}


void srt(int n, int arr[]){
    for(int steps = 0; steps < n; steps++){
        int minelement = arr[steps], pos = steps;
        printf("minelement %d \n", minelement);
        printf("position %d \n", pos);

        for(int i = steps; i < n; i++){
            printf("arr[i] = %d \n", arr[i]);
            if(arr[i] < minelement){

                minelement = arr[i];
                pos = i;
            }

    }
    swap(&arr[steps], &arr[pos]);

    printf("step %d \n", steps);
    printf("Min = %d and Pos = %d \n", minelement, pos);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);

    }
    printf("\n \n");
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
