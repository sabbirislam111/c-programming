#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int l,r;
    int arr[101];
    scanf("%d %d",&l, &r);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < l; i++){
        printf("%d ", arr[i]);
    }

    for(int i = l; i <= r; i++){
        printf("0 ");
    }

    for(int i = r+1; i < n; i++){
        printf("%d ", arr[i]);
    }




 return 0;
}
