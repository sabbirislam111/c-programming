#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    int count[11] ={0};
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int val = arr[i];
        count[val]++;

    }

     for(int val = 0; val <= 10; val++){

            if(count[val]> 0){
                 printf("%d -> %d\n",val, count[val]);

            }


    }


}
