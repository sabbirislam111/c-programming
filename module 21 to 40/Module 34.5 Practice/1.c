#include<stdio.h>
int get_sum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum+=arr[i];
    }
    return sum;


}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",  &arr[i]);
    }
    int ans = get_sum(arr, n);
    printf("%d", ans);

  return 0;
}
