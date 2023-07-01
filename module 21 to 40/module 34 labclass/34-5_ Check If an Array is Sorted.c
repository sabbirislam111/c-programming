#include<stdio.h>
#include<stdbool.h>
void sorting(int *a, int n){
    for(int i = 0; i < n -1; i++){
        for(int j = i +1; j< n; j++){

            if(a[j] < a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void cpy_arr(int *a, int*b, int n){
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }

}

bool is_sorted(int *a, int n){
    int b[n];
    cpy_arr(a, b, n);
    sorting(a, n);

    for(int i = 0; i < n; i++){
        if(b[i] != a[i]){
            return false;
        }
    }
    return true;

}

int main(){
    int arr[5]={1, 3, 5, 7, 10};
    bool ans = is_sorted(arr, 5);

    if(ans){
        printf("sorted");
    }
    else{
       printf("Not sorted");
    }

 return 0;
}
