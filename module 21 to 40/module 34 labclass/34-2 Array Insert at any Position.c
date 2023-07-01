#include<stdio.h>
int insertvalue(int *a, int n, int pos, int val){
    for(int i = n-2; i >= pos; i--){
        a[i+1] = a[i];
    }
    a[pos] = val;

}

int main(){

int arr[6] ={1, 4, 5, 7, 10};
int pos, val;
scanf("%d %d", &pos, &val);
insertvalue(arr, 6, pos, val);

for(int i = 0; i < 6; i++){
    printf("%d ", arr[i]);
}

 return 0;
}
