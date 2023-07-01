#include<stdio.h>
int mtpRotet(int siz, int n, int arr[]){

    for(int i = 0; i < n; i++){
        int tmp  = arr[0];
        for(int i = 1; i < siz; i++){
            arr[i - 1] = arr[i];
        }
        arr[siz - 1] = tmp;
    }

    for(int i = 0; i < siz; i++){
        printf("%d ", arr[i]);
    }

}


int main(){
    int n;
    scanf("%d", &n);
    int arr[] = {1, 2, 3, 4, 5};
    int siz = sizeof(arr)/sizeof(arr[0]);



    mtpRotet(siz, n, arr);


}
