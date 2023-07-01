#include<stdio.h>
void shorting(int *a, int n){

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
                if(a[j] < a[i]){
                      int temp = a[i];
                      a[i] = a[j];
                      a[j] = temp;

                }
        }
    }

}


int main(){

int arr[5]={18, 3, 5, 7, 10};

shorting(arr, 5);


 for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

 return 0;
}
