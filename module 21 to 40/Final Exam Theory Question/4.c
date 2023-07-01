#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);


    long long int arr[n];
    long long int count[n];

    for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);

    }

       for(int i = 0; i < n; i++){
            long long int val = arr[i];
            count[val]++;
    }

    for(int i = 0; i < n; i++){
            long long int val = arr[i];
        printf("%lld -> %lld ", val, count[val]);
    }




    return 0;
}
