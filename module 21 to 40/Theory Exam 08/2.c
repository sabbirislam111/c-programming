#include<stdio.h>
int make_average(int *arr, int n){
    int sum = 0;
    int aver;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    aver = sum / n;
    return aver;

}

int main(){

int n;
scanf("%d", &n);

int arr[n];
for(int i = 0; i < n; i++){

    scanf("%d", &arr[i]);
}
int ans = make_average(arr, n);
printf("Everage = %d", ans);

  return 0;
}
