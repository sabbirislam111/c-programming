#include<stdio.h>
void take_input(int *a, int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }


}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    take_input(arr, n);

    for(int i = 0; i < n; i++){
       printf("%d ", arr[i]);
    }
 return 0;
}
