#include<stdio.h>

int * makeReverse(int n, const int a[]){
        int * rev = (int*) malloc(sizeof(int));
         for(int i = 0; i < n; i++){
        rev[i] = a[i];
        }

       for(int i = n-1; i >= 0; i--){
        printf("%d ", rev[i]);
       }

}

int main(){

 int n;
 scanf("%d", &n);

 int arr[n];

 for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
 }

makeReverse(n, arr);




}
