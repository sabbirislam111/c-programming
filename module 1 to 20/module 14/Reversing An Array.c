#include<stdio.h>
int main(){

    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        //printf("%d ", arr[i]);
    }

    int arr2[n];
    for(i = 0; i < n; i++){
        arr2[n-1-i] = arr[i];

    }
    for(i = 0; i < n; i++){
        printf("%d ", arr2[i]);
    }







 return 0;
}
