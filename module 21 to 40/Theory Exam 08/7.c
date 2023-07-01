#include<stdio.h>
int shorting(int *a, int n){
    int count = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
                if(a[j] < a[i]){
                      int temp = a[i];
                      a[i] = a[j];
                      a[j] = temp;
                      count++;
                }
        }
    }
    return count;
}


int main(){

int arr[5]={18, 13, 5, 7, 10};

int ans = shorting(arr, 5);
printf("%d", ans);



 return 0;
}
