#include<stdio.h>
#include<stdbool.h>
int main(){

    int n, i;
    scanf("%d", &n);
    int arr[n];



    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }

    int ans = 0, max = arr[0], min = arr[0];

    for(i = 1; i < n; i++){
       if(arr[i] > max || arr[i] < min){
            ans++;
       }
       if(arr[i] > max){
        max = arr[i];
       }
       if(arr[i] < min){
        min = arr[i];
       }
    }
    printf("%d", ans);





 return 0;
}
