#include<stdio.h>
void change_array(int *arr, int n){


    int i = 0;
    int j = n-1;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

}

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    change_array(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

 return 0;
}
