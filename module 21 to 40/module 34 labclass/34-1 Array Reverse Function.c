#include<stdio.h>
int rev_array(int arr[], int n){
    for(int i = n-1;i >= 0; i--){
        printf("%d ", arr[i]);
    }


}


int main(){


int n;
scanf("%d", &n);
int arr[n];

for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

rev_array(arr, n);



 return 0;
}
