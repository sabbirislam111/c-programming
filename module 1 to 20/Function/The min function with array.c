#include<stdio.h>
int main(){
    int getMin(int a, int b){
        int temp;
        if(a < b){
             temp = a;
        }
        else{
            temp = b;
        }
        return temp;

    }

    int n;
    scanf("%d", &n);

    int arr[n];


    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int ans = arr[0];

    for(int i=0; i < n; i++){
        ans = getMin(ans, arr[i]);
    }
    printf("%d", ans);


}

