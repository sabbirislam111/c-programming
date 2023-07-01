#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    int sum[10] = {0};
    int n2;
    for(int i = 0; i < n; i++){
        scanf("%d", &n2);
        for(int j = 0; j  < n2; j++){
            scanf("%d", &arr[j]);
            sum[i]+=arr[j];
        }
    }
    for(int j = 0; j < n; j++){
        printf("case %d : %d \n",j+1, sum[j]);
    }



  return 0;
}
