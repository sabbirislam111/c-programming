#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[1000];
    int sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        sum+= arr[i];
    }
    printf("%d", sum);


 return 0;
}
