#include<stdio.h>
void remov_ele(int *a, int n, int pos){
    for(int i = pos; i < n; i++){
        a[i] = a[i+1];
    }

}


int main(){

    int arr[5]={1, 3, 5, 7, 10};
    int pos;
    scanf("%d", &pos);
    remov_ele(arr, 5, pos);

    for(int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }

 return 0;
}
